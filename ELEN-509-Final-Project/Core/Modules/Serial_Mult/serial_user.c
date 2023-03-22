// serial_user.c

#include "serial.h"
#include "serial_user.h"
#include "ASCII_numbers.h"
#include "stm32g0xx_ll_usart.h"
#include <stdio.h>
#include "gps.h"

uint8_t GPS_rxBuffer[RX_BUFFER_SIZE];
uint8_t GPS_txBuffer[TX_BUFFER_SIZE];

comm_buffer_t gps_inputBuffer = {0,0, GPS_rxBuffer, RX_BUFFER_SIZE, USART1};
comm_buffer_t gps_outputBuffer = {0,0, GPS_txBuffer, TX_BUFFER_SIZE, USART1};

// PC Interface
// PC circular buffer
uint8_t PC_rxBuffer[PC_RX_BUFFER_SIZE];
uint8_t PC_txBuffer[PC_TX_BUFFER_SIZE];
comm_buffer_t pc_inputBuffer = {0,0, PC_rxBuffer, PC_RX_BUFFER_SIZE, USART2};
comm_buffer_t pc_outputBuffer = {0,0, PC_txBuffer, PC_TX_BUFFER_SIZE, USART2};

uint8_t packetBuffer[16];
uint8_t inPacket = false;
uint8_t nextPacketChar = 0;
uint8_t processPacket = false;

uint8_t processBinaryPacket = false;
int16_t packetLength = -1;
uint8_t escapeDetected = false;

extern uint8_t flashLED;
extern uint8_t buttonPushed;
extern uint16_t flashDelay;
extern uint16_t flashDelaySeed;
extern uint8_t flashAtSpeed;
extern uint16_t serialValue;

extern uint8_t remoteMessage[];
extern uint8_t fo_char2Send[];
extern uint8_t rs485_char2Send[];

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart4;

// PC packet buffer
uint8_t pcPacketBuffer[PC_PACKET_BUFFER_LENGTH] = "";
uint8_t pcPacketBufferIndex = 0;
pc_packet_buffer_status pcPacketStatus = PC_WAITING_FOR_PACKET_START;

uint8_t pcProcessPacket = false;
uint8_t pcpacketBuffer[PC_PACKET_BUFFER_LENGTH];

void ProcessPcPacket(void)
{
  
  
#if 1
  char message[MSG_SIZE] = "";
  switch (pcPacketBuffer[1]) {
  case 'n':     // n = turn on LED
  case 'N':     
    //HAL_GPIO_WritePin(BOARD_GRN_LED, GPIO_PIN_SET);
    //flashLED = false;
    break;
  case 'f':     // s = turn off LED
  case 'F':
   // HAL_GPIO_WritePin(BOARD_GRN_LED, GPIO_PIN_RESET);
   // flashLED = false;
  break;
  case 't':     // takes command from PC and returns GPS lat and Lon
  case 'T':
    
    //HAL_GPIO_TogglePin(BOARD_GRN_LED);
    //flashLED = false;
    break;
    case 'g':     // v = check switch press
    case 'G':
      
         sprintf(message, "Latitude: %f Longitude: %f\n", gpsData.gps_latitude, gpsData.gps_longitude);

    //sprintf(message, "$v%c\n", buttonPushed ? 'p' : 'n');
    //SendString(&pc_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    //buttonPushed = false;      
    break; 
  case 's':     // v = check switch press
  case 'S':
       if(gpsData.gps_lock == false)
       {
         sprintf(message, "No Lock\n");
       }
       else
       {
         sprintf(message, "Latitude: %f Longitude: %f\n", gpsData.gps_latitude, gpsData.gps_longitude);
       }
       SendString(&pc_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    //sprintf(message, "$v%c\n", buttonPushed ? 'p' : 'n');
    //SendString(&pc_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    //buttonPushed = false;      
    break;
  case 'v':     //Takes packet from PC and and report Lat & Long of GPS
  case 'V':
    
    //sprintf(message, "$v%c\n", buttonPushed ? 'p' : 'n');
    //SendString(&pc_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    //buttonPushed = false;      
    break;
  case 'l':     // v = check switch press
  case 'L':
   rs485_char2Send[0] =  '$';
   rs485_char2Send[1] = 'L';
   rs485_char2Send[2] = '\r';

   HAL_UART_Transmit(&huart3, rs485_char2Send, 1, 1000);   // remote bus  // #!
    //sprintf(message, "$v%c\n", buttonPushed ? 'p' : 'n');
    //SendString(&pc_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    //buttonPushed = false;   
    break;
  case 'w':     // w = write a value to the variable "serialValue"
  case 'W':
    ConvertASCII2UINT16((char const *)&pcPacketBuffer[2], 5, '\n', &serialValue);
    fo_char2Send[0] = pcPacketBuffer[2];
    HAL_UART_Transmit(&huart4, fo_char2Send, 1, 1000);   // fiber optic
    //sprintf((char *)remoteMessage, "$d%d\n", pcPacketBuffer[2]);
    //HAL_UART_Transmit(&huart3, remoteMessage, 5, 1000);
    break;
  case 'r':
  case 'R':
   // sprintf(message, "$r%d\n", serialValue);
    
    SendString(&pc_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    break;
  case 'x':     // x = flash LED at a 1/2Hz rate (1 sec on, 1 sec off)
  case 'X':
   // flashLED ^= true;
    break;
  }
  pcProcessPacket = false;
#endif
}

void ProcessPcInputChar(comm_buffer_t * _buff_instance)
{
  switch (pcPacketStatus) {
  case PC_WAITING_FOR_PACKET_START:
    if (_buff_instance->buffer[_buff_instance->nextBufferOut] == '$') {
      pcPacketBufferIndex = 1;
      pcPacketBuffer[0] = _buff_instance->buffer[_buff_instance->nextBufferOut];
      
      pcPacketStatus = PC_IN_PACKET;
    }
    break;
  case PC_IN_PACKET:
    pcPacketBuffer[pcPacketBufferIndex] = _buff_instance->buffer[_buff_instance->nextBufferOut];
    
    //packetBuffer[0] = pcPacketBuffer[pcPacketBufferIndex];
    if ((pcPacketBuffer[pcPacketBufferIndex] == '\r') || (pcPacketBuffer[pcPacketBufferIndex] == '\n')) {
      // place this next line in this case if there is no checksum, if there is one, 
      // enable the checksum check case and place it in there instead
      pcProcessPacket = true;
      pcPacketStatus = PC_WAITING_FOR_PACKET_START;
    }
    
    if (pcPacketBufferIndex >= PC_PACKET_BUFFER_LENGTH - 1)
      pcPacketStatus = PC_WAITING_FOR_PACKET_START;
    
    
    pcPacketBufferIndex++;
    break;
//  case PC_IN_CHECKSUM:
//    // do the checksum
//    
//    //then set the flag to process if all is ok
//    pcProcessPacket = true;
//    pcPacketStatus = PC_WAITING_FOR_PACKET_START;
//    break;
  }
  
  _buff_instance->nextBufferOut++;
  if (_buff_instance->nextBufferOut >= _buff_instance->bufferLength) _buff_instance->nextBufferOut = 0;
}



//// function to process the input buffer with an ASCII-based protocol
//uint8_t ProcessReceiveBuffer(void)
//{
//  if (rxBuffer[nextSerialRx2Proc] == '$') {
//    inPacket = true;
//    packetBuffer[0] = rxBuffer[nextSerialRx2Proc];
//    nextPacketChar = 1;
//  }
//  else {
//    if (inPacket == true) {
//      if (((rxBuffer[nextSerialRx2Proc] >= '0') && (rxBuffer[nextSerialRx2Proc] <= '9')) || 
//          ((rxBuffer[nextSerialRx2Proc] >= 'r') && (rxBuffer[nextSerialRx2Proc] <= 'v')) ||
//          ((rxBuffer[nextSerialRx2Proc] >= 'R') && (rxBuffer[nextSerialRx2Proc] <= 'V')) ||
//          (rxBuffer[nextSerialRx2Proc] >= '\n') || (rxBuffer[nextSerialRx2Proc] <= '\r')) {
//        
//            packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//
//            if (rxBuffer[nextSerialRx2Proc] == '\n') {
//              processPacket = true;
//              inPacket = false;
//            }
//          }
//      else {
//        inPacket = false;
//      }
//    }
//  }
//  
//  
//  if (++nextSerialRx2Proc >= RX_BUFFER_SIZE) {
//    nextSerialRx2Proc = 0;
//  }
//  return 0;
//
//}


//uint8_t ProcessPacket(void)
//{
//  switch (packetBuffer[1]) {
//  // list of commands
//  // each command has intentional fallthru for upper/lower case
//  case 'r':     // r = turn on LED
//  case 'R':     
////    HAL_GPIO_WritePin(BOARD_MOUNTED_LED, GPIO_PIN_SET);
//    flashLED = false;
//    flashAtSpeed = false;
//    break;
//  case 's':     // s = turn off LED
//  case 'S':
////    HAL_GPIO_WritePin(BOARD_MOUNTED_LED, GPIO_PIN_RESET);
//    flashLED = false;
//    flashAtSpeed = false;
//  break;
//  case 't':     // t = toggle LED
//  case 'T':
////    HAL_GPIO_TogglePin(BOARD_MOUNTED_LED);
//    flashLED = false;
//    flashAtSpeed = false;
//    break;
//  case 'u':     // u = flash LED at speed (the number entered is the on and off time in 10mS 
//  case 'U':     // increments, so a value of 100 is 1 sec on and 1 sec off
//    flashLED = false;
//    flashAtSpeed = true;
//    ConvertASCII2UINT16((char const *)&packetBuffer[2], 5, '\n', &flashDelaySeed);
//    flashDelay = flashDelaySeed;
//    break;
//  case 'v':     // v = check switch press
//  case 'V':
//    if (buttonPushed == true) {
//      SendString("Pushed", 6, StripZeros, AddCRLF);
//      buttonPushed = false;      
//    }
//    else {
//      SendString("Not Pushed", 10, StripZeros, AddCRLF);
//    }
//    break;
//  case 'w':     // w = write a value to the variable "serialValue"
//  case 'W':
//    ConvertASCII2UINT16(&packetBuffer[2], 5, '\n', &serialValue);
//    break;
//  case 'x':     // x = flash LED at a 1/2Hz rate (1 sec on, 1 sec off)
//  case 'X':
//    flashLED = true;
//    flashAtSpeed = false;
//    break;
//  }
//
//  processPacket = false;
//
//  return 0;
//}
//
//// function to process the input buffer with a simple binary packet
//uint8_t ProcessReceiveByte(void)
//{
//  if (escapeDetected == true) {
//    if (rxBuffer[nextSerialRx2Proc] == ESCAPE_CHAR) {
//      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//    }
//    else {
//      nextPacketChar = 0;
//      packetBuffer[nextPacketChar++] = ESCAPE_CHAR;
//      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//    }
//    escapeDetected = false; // either way we turn off the switch
//  }
//  else {
//    if (rxBuffer[nextSerialRx2Proc] == ESCAPE_CHAR) {
//      escapeDetected = true;
//    }
//    else {
//      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//    }
//  }
//  
//  if (++nextSerialRx2Proc >= RX_BUFFER_SIZE) {
//    nextSerialRx2Proc = 0;
//  }
//  return 0;
//
//}
//
//
//// function to process the input buffer with a binary packet that includes packet length
//uint8_t ProcessReceiveByteWithLength(void)
//{
//  if (escapeDetected == true) {
//    if (rxBuffer[nextSerialRx2Proc] == ESCAPE_CHAR) {
//      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//      packetLength--;
//    }
//    else { 
//      nextPacketChar = 0;
//      packetBuffer[nextPacketChar++] = ESCAPE_CHAR;
//      packetLength = rxBuffer[nextSerialRx2Proc];
//      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//    }
//    escapeDetected = false; // either way we turn off the switch
//  }
//  else {
//    if (rxBuffer[nextSerialRx2Proc] == ESCAPE_CHAR) {
//      escapeDetected = true;
//    }
//    else {
//      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];
//      if (packetLength > 0) 
//        packetLength--;
//    }
//  }
//  
//  if (++nextSerialRx2Proc >= RX_BUFFER_SIZE) {
//    nextSerialRx2Proc = 0;
//  }
//  
//  if (packetLength == 0) {
//    processBinaryPacket = true;
//    packetLength = -1;
//  }
//  return 0;
//
//}
//
//
//// Validate and handle the binary packet that was transmitted
//void ProcessBinaryPacket(void)
//{
//HAL_Delay(2000);
//}
//
//

// serial_user.c

//#include "serial.h"
#include "serial_user.h"
#include "ASCII_numbers.h"
#include <stdio.h>
#include "gps.h"


uint8_t GPS_rxBuffer[RX_BUFFER_SIZE];
uint8_t GPS_txBuffer[TX_BUFFER_SIZE];

comm_buffer_t gps_inputBuffer = {0,0, GPS_rxBuffer, RX_BUFFER_SIZE, USART1};
comm_buffer_t gps_outputBuffer = {0,0, GPS_txBuffer, TX_BUFFER_SIZE, USART1};

uint8_t packetBuffer[16];
uint8_t inPacket = false;
uint8_t nextPacketChar = 0;
uint8_t processPacket = false;

uint8_t processBinaryPacket = false;
int16_t packetLength = -1;
uint8_t escapeDetected = false;
uint8_t ledOnCommand = 0x00;


extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart4;
extern uint8_t flashLED;
extern uint8_t buttonPushed;
extern uint16_t flashDelay;
extern uint16_t flashDelaySeed;
extern uint8_t flashAtSpeed;
uint16_t serialValue;
extern uint8_t nextSerialRx2Proc;



// function to process the input buffer with an ASCII-based protocol
uint8_t ProcessReceiveBuffer(void)
{
  if (gps_inputBuffer.buffer[nextSerialRx2Proc] == '$') {
    inPacket = true;
    packetBuffer[0] = gps_inputBuffer.buffer[nextSerialRx2Proc];
    nextPacketChar = 1;
  }
  else {
  if (inPacket == true) {
    packetBuffer[nextPacketChar++] = gps_inputBuffer.buffer[nextSerialRx2Proc];

    if (gps_inputBuffer.buffer[nextSerialRx2Proc] == '\n') {
      processPacket = true;
      inPacket = false;
    }
  }
}

  
  
  if (++nextSerialRx2Proc >= RX_BUFFER_SIZE) {
    nextSerialRx2Proc = 0;
  }
  return 0;

}


uint8_t ProcessPacket(void)
{
  char message[MSG_SIZE] = "";
  uint8_t dataToSend;
  switch (packetBuffer[1]) {
  // list of commands
  // each command has intentional fallthru for upper/lower case
  case 'r':     // r = send 8 bit number
  case 'R':     
    ConvertASCII2UINT16((char const *)&packetBuffer[2], 5, '\n', &serialValue);
    sprintf(message, "$r%d\n", serialValue);
    SendString(&gps_outputBuffer, message, sizeof(message), StripZeros, AddCRLF);
    dataToSend = (uint8_t)serialValue;

    // Send data through the fiber optic link (UART4)
    HAL_UART_Transmit(&huart4, &dataToSend, 1, 1000);

    // Add a delay if needed (optional)
    HAL_Delay(50); // Adjust the delay duration as needed

    // Send data over the RS485 bus (UART3)
    HAL_UART_Transmit(&huart3, &dataToSend, 1, 1000);

    break;
  case 'l':     // l = turn on LED on a remote module
  case 'L':
    ledOnCommand = 0xFF;
    // Send the LED command through the fiber optic link (UART4)
    HAL_UART_Transmit(&huart4, &ledOnCommand, 1, 1000);

    // Add a delay if needed (optional)
    HAL_Delay(50); // Adjust the delay duration as needed

    // Send the LED command over the RS485 bus (UART3)
    HAL_UART_Transmit(&huart3, &ledOnCommand, 1, 1000);
    break;
    case 'g':     // G reports back a packet with lat and lon of GPS
    case 'G': {
      float latitude, longitude;
      bool has_lock = GetGPSData(&latitude, &longitude);
  
      if (has_lock) {
        // Format the response string
        char response[64];
        snprintf(response, sizeof(response), "GPS_LAT:%f;GPS_LONG:%f", latitude, longitude);

        // Send the response to the PC using SendString()
        SendString(&gps_outputBuffer, response, sizeof(response), StripZeros, AddCRLF);
      } else {
        // Send an error message if no GPS lock
        char error_message[] = "GPS_NO_LOCK";
        SendString(&gps_outputBuffer, error_message, sizeof(error_message) - 1, StripZeros, AddCRLF);
        break;
      }
      break;
    }
  }
  nextSerialRx2Proc += nextPacketChar;
  processPacket = false;
  return 0;
}
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

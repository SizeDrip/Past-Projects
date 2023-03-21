// serial_user.c

//#include "serial.h"
#include "serial_user.h"
//#include "ASCII_numbers.h"


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


extern uint8_t flashLED;
extern uint8_t buttonPushed;
extern uint16_t flashDelay;
extern uint16_t flashDelaySeed;
extern uint8_t flashAtSpeed;
extern uint16_t serialValue;
extern uint8_t nextSerialRx2Proc;



// function to process the input buffer with an ASCII-based protocol
uint8_t ProcessReceiveBuffer(void)
{
  if (GPS_rxBuffer[nextSerialRx2Proc] == '$') {
    inPacket = true;
    packetBuffer[0] = GPS_rxBuffer[nextSerialRx2Proc];
    nextPacketChar = 1;
  }
  else {
    if (inPacket == true) {
      if (((GPS_rxBuffer[nextSerialRx2Proc] >= '0') && (GPS_rxBuffer[nextSerialRx2Proc] <= '9')) || 
          ((GPS_rxBuffer[nextSerialRx2Proc] >= 'r') && (GPS_rxBuffer[nextSerialRx2Proc] <= 'v')) ||
          ((GPS_rxBuffer[nextSerialRx2Proc] >= 'R') && (GPS_rxBuffer[nextSerialRx2Proc] <= 'V')) ||
          (GPS_rxBuffer[nextSerialRx2Proc] >= '\n') || (GPS_rxBuffer[nextSerialRx2Proc] <= '\r')) {
        
            packetBuffer[nextPacketChar++] = GPS_rxBuffer[nextSerialRx2Proc];

            if (GPS_rxBuffer[nextSerialRx2Proc] == '\n') {
              processPacket = true;
              inPacket = false;
            }
          }
      else {
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
  switch (packetBuffer[1]) {
  // list of commands
  // each command has intentional fallthru for upper/lower case
  case 'r':     // r = send 8 bit number
  case 'R':     
    break;
  }

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
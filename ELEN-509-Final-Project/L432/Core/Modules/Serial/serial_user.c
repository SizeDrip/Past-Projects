// serial_user.c

#include <stdio.h>
#include "serial.h"
#include "serial_user.h"
#include "ASCII_numbers.h"
#include "SevenSegLED.h"


// Modular Variables
uint8_t packetBuffer[16];
uint8_t inPacket = false;
uint8_t nextPacketChar = 0;
uint8_t processPacket = false;


// external variables
extern uint8_t rxBuffer[];
extern uint8_t txBuffer[];
extern uint8_t remoteAddress;
extern uint8_t protocolSelection;
extern uint16_t displayNumber;

// ***********
// include externs here for variables that
//refer to things being controlled or changed by
//the packet processor.
extern uint8_t flashLED;
extern uint8_t buttonPushed;
extern uint16_t flashDelay;
extern uint16_t flashDelaySeed;
extern uint8_t flashAtSpeed;
extern uint16_t serialValue;


// ****** CODE START **********
// function to process the input buffer
uint8_t ProcessReceiveBuffer(void)
{
  if (rxBuffer[nextSerialRx2Proc] == '$') {
    inPacket = true;
    packetBuffer[0] = rxBuffer[nextSerialRx2Proc];
    nextPacketChar = 1;
  }
  else {
    if (inPacket == true) {
      packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];

      if ( (rxBuffer[nextSerialRx2Proc] == '\n') && (packetBuffer[1] == 0x30 + remoteAddress) ) {
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
  switch (packetBuffer[2]) {
  // list of commands
  // each command has intentional fallthru for upper/lower case
  case 'd':     // n = Display a value
  case 'D':
    ConvertASCII2UINT16((const char *)&packetBuffer[3], 5, '\n', &displayNumber);
    ParseToDigits(displayNumber, NoDp, NotBlank);
    break;
  }

  processPacket = false;

  return 0;
}



// serial_user.c

#include "serial.h"
#include "serial_user.h"
#include "ASCII_numbers.h"
#include <stdio.h>

// Modular Variables
uint8_t packetBuffer[16];
uint8_t inPacket = false;
uint8_t nextPacketChar = 0;
uint8_t processPacket = false;


// external variables
extern uint8_t rxBuffer[];
extern uint8_t txBuffer[];

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
      if (((rxBuffer[nextSerialRx2Proc] >= '0') && (rxBuffer[nextSerialRx2Proc] <= '9')) || 
          ((rxBuffer[nextSerialRx2Proc] >= 'f') && (rxBuffer[nextSerialRx2Proc] <= 'n')) ||
          ((rxBuffer[nextSerialRx2Proc] >= 'F') && (rxBuffer[nextSerialRx2Proc] <= 'N')) ||
          ((rxBuffer[nextSerialRx2Proc] >= 't') && (rxBuffer[nextSerialRx2Proc] <= 'x')) ||
          ((rxBuffer[nextSerialRx2Proc] >= 'T') && (rxBuffer[nextSerialRx2Proc] <= 'X')) ||
          (rxBuffer[nextSerialRx2Proc] >= ' ') || 
          (rxBuffer[nextSerialRx2Proc] >= '\n') || 
          (rxBuffer[nextSerialRx2Proc] <= '\r')) {
        
            packetBuffer[nextPacketChar++] = rxBuffer[nextSerialRx2Proc];

            if (rxBuffer[nextSerialRx2Proc] == '\n') {
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
  char message[MSG_SIZE] = "";
  switch (packetBuffer[1]) {
  // list of commands
  // each command has intentional fallthru for upper/lower case
  case 'n':     // n = turn on LED
  case 'N':     
    HAL_GPIO_WritePin(BOARD_GRN_LED, GPIO_PIN_SET);
    flashLED = false;
    break;
  case 'f':     // s = turn off LED
  case 'F':
    HAL_GPIO_WritePin(BOARD_GRN_LED, GPIO_PIN_RESET);
    flashLED = false;
  break;
  case 't':     // t = toggle LED
  case 'T':
    HAL_GPIO_TogglePin(BOARD_GRN_LED);
    flashLED = false;
    break;
  case 'v':     // v = check switch press
  case 'V':
    sprintf(message, "$v%c\n", buttonPushed ? 'p' : 'n');
    SendString(message, sizeof(message), StripZeros, AddCRLF);
      buttonPushed = false;      
    break;
  case 'w':     // w = write a value to the variable "serialValue"
  case 'W':
    ConvertASCII2UINT16((char const *)&packetBuffer[2], 5, '\n', &serialValue);
    break;
  case 'r':
  case 'R':
    sprintf(message, "$r%d\n", serialValue);
    
    SendString(message, sizeof(message), StripZeros, AddCRLF);
    break;
  case 'x':     // x = flash LED at a 1/2Hz rate (1 sec on, 1 sec off)
  case 'X':
    flashLED ^= true;
    break;
  }

  processPacket = false;

  return 0;
}



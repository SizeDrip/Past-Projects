// serial_user.h

#ifndef _SERIAL_USER_
#define _SERIAL_USER_

// #includes
#include "Serial.h"


// prototypes

uint8_t ProcessReceiveBuffer(void);
uint8_t ProcessPacket(void);


// public variables
extern uint8_t processPacket;

// # defines
#define ACTIVE_USART LPUART1

#define MSG_SIZE 10

#endif
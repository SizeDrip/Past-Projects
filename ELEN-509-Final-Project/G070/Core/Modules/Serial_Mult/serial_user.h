// serial_user.h

#ifndef _SERIAL_USER_
#define _SERIAL_USER_


#include "serial.h"

#define ESCAPE_CHAR 0xAA
#define BUFFER_SIZE 100
#define SMALL_BUFFER_SIZE 50
#define MED_BUFFER_SIZE 100
#define LARGE_BUFFER_SIZE 150

// use for <buffer>_p_t
//#define <name>_BUFFER_SIZE 100


// public references ********************
extern comm_buffer_t gps_inputBuffer;
extern comm_buffer_t gps_outputBuffer;



// prototypes

uint8_t ProcessReceiveBuffer(void);
uint8_t ProcessReceiveByte(void);
uint8_t ProcessReceiveByteWithLength(void);

uint8_t ProcessPacket(void);
void ProcessBinaryPacket(void);

#endif
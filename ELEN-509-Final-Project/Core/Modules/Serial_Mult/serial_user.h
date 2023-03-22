// serial_user.h

#ifndef _SERIAL_USER_
#define _SERIAL_USER_


#include "serial.h"

#define ESCAPE_CHAR 0xAA
#define BUFFER_SIZE 100
#define SMALL_BUFFER_SIZE 50
#define MED_BUFFER_SIZE 100
#define LARGE_BUFFER_SIZE 150

#define PC_PACKET_BUFFER_LENGTH 50
#define MSG_SIZE 10

// use for <buffer>_p_t
//#define <name>_BUFFER_SIZE 100
// typedef,structure, union, enum definitions
typedef enum _pc_packet_buffer_status {
  PC_WAITING_FOR_PACKET_START,
  PC_IN_PACKET,
  PC_IN_CHECKSUM,
  PC_PACKET_RECEIVED
} pc_packet_buffer_status;

// public references ********************
extern comm_buffer_t gps_inputBuffer;
extern comm_buffer_t gps_outputBuffer;

extern uint8_t pcProcessPacket;
extern comm_buffer_t pc_inputBuffer;
extern comm_buffer_t pc_outputBuffer;

// prototypes

uint8_t ProcessReceiveBuffer(void);
uint8_t ProcessReceiveByte(void);
uint8_t ProcessReceiveByteWithLength(void);

// prototypes
void ProcessPcInputChar(comm_buffer_t * _buff_instance);
void ProcessPcPacket(void);

uint8_t ProcessPacket(void);
void ProcessBinaryPacket(void);

#endif
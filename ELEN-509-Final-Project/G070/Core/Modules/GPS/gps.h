
#include "serial_user.h"


typedef enum _gps_packet_buffer_status {
  WAITING_FOR_PACKET_START,
  IN_HEADER,
  IN_PACKET,
  IN_CHECKSUM,
  PACKET_RECEIVED
} gps_packet_buffer_status;

extern uint8_t gpsPacketBuffer[];
extern uint8_t gpsHeaderBuffer[];

extern uint8_t gpsPacketBufferIndex;
extern uint8_t gpsHeaderBufferIndex;

extern gps_packet_buffer_status gpsPacketStatus;

extern uint8_t gpsProcessPacket;

void ProcessGpsInputChar(comm_buffer_t * _buff_instance);
void ProcessGPS_Packet(void);

#define GPS_PACKET_BUFFER_LENGTH 150
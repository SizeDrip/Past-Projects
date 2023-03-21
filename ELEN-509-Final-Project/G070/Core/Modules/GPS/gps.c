#include "gps.h"
#include "main.h"
#include "ux_manager.h"


uint8_t gpsPacketBuffer[GPS_PACKET_BUFFER_LENGTH] = "$GNGGA";
uint8_t gpsHeaderBuffer[10];

uint8_t gpsPacketBufferIndex = 0;
uint8_t gpsHeaderBufferIndex = 0;

gps_packet_buffer_status gpsPacketStatus = WAITING_FOR_PACKET_START;

uint8_t gpsProcessPacket = false;

void ProcessGpsInputChar(comm_buffer_t * _buff_instance)
{
  switch (gpsPacketStatus) {
  case WAITING_FOR_PACKET_START:
    if (_buff_instance->buffer[_buff_instance->nextBufferOut] == '$') {
      gpsHeaderBufferIndex = 0;
      gpsHeaderBuffer[gpsHeaderBufferIndex] = _buff_instance->buffer[_buff_instance->nextBufferOut];
      gpsHeaderBufferIndex++;
      gpsPacketStatus = IN_HEADER;
    }
    break;
  case IN_HEADER:
    gpsHeaderBuffer[gpsHeaderBufferIndex] = _buff_instance->buffer[_buff_instance->nextBufferOut];
    gpsHeaderBufferIndex++;
    
    if (gpsHeaderBufferIndex == 6) {
      if ((gpsHeaderBuffer[3] == 'G') && (gpsHeaderBuffer[4] == 'G') && (gpsHeaderBuffer[5] == 'A')) {
        gpsPacketBufferIndex = 6;
        gpsPacketStatus = IN_PACKET;
      }
      else 
        gpsPacketStatus = WAITING_FOR_PACKET_START;
    }
    break;
  case IN_PACKET:
    gpsPacketBuffer[gpsPacketBufferIndex] = _buff_instance->buffer[_buff_instance->nextBufferOut];
    
    if ((gpsPacketBuffer[gpsPacketBufferIndex] == '\r') || (gpsPacketBuffer[gpsPacketBufferIndex] == '\n'))
      gpsPacketStatus = WAITING_FOR_PACKET_START;
    
    if (gpsPacketBufferIndex >= GPS_PACKET_BUFFER_LENGTH - 1)
      gpsPacketStatus = WAITING_FOR_PACKET_START;
    
    if (gpsPacketBuffer[gpsPacketBufferIndex] == '*')
      gpsPacketStatus = IN_CHECKSUM;
    
    gpsPacketBufferIndex++;
    break;
  case IN_CHECKSUM:
    gpsPacketBuffer[gpsPacketBufferIndex] = _buff_instance->buffer[_buff_instance->nextBufferOut];
    
    if ((gpsPacketBuffer[gpsPacketBufferIndex] == '\r') || (gpsPacketBuffer[gpsPacketBufferIndex] == '\n')) {
      gpsProcessPacket = true;
      gpsPacketStatus = WAITING_FOR_PACKET_START;
    }
  
    if (gpsPacketBufferIndex >= GPS_PACKET_BUFFER_LENGTH - 1)
      gpsPacketStatus = WAITING_FOR_PACKET_START;

    gpsPacketBufferIndex++;
    break;
  }
  
  _buff_instance->nextBufferOut++;
  if (_buff_instance->nextBufferOut >= _buff_instance->bufferLength) _buff_instance->nextBufferOut = 0;
}


void ProcessGPS_Packet(void)
{
  gpsIcon.data = '*';
  // Do your stuff :-)
  
  gpsProcessPacket = false;
}


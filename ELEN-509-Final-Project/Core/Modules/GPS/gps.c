#include "gps.h"
#include "main.h"
#include "ux_manager.h"
#include <string.h>


uint8_t gpsPacketBuffer[GPS_PACKET_BUFFER_LENGTH] = "$GNGGA";
uint8_t gpsHeaderBuffer[10];

uint8_t gpsPacketBufferIndex = 0;
uint8_t gpsHeaderBufferIndex = 0;

gps_packet_buffer_status gpsPacketStatus = WAITING_FOR_PACKET_START;

uint8_t gpsProcessPacket = false;

struct GPS_DATA gpsData;

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

double convert_to_decimal_degrees(const char* value, char nsew) {
    int degrees = 0;
    double minutes = 0.0;
    double decimal_degrees = 0.0;
    
    if (strlen(value) >= 7) {
        degrees = 10 * (value[0] - '0') + (value[1] - '0');
        minutes = atof(value + 2);
        decimal_degrees = degrees + minutes / 60.0;

        if (nsew == 'S' || nsew == 'W') {
            decimal_degrees = -decimal_degrees;
        }
    }
    return decimal_degrees;
}

void parse_GPS_message(const char* message, gps_coordinate* cr) {
 
    if((message != NULL) && (cr != NULL))
    {     
        memset(cr, 0, sizeof(gps_coordinate));
    
        char str_copy[75];
        memcpy(str_copy, message, 74);
   
        str_copy[74] = '\0';
        char* token = strtok(str_copy, ",$");
    
        int i = 0;
    
        while (token != NULL) 
        {
          switch (i) 
          {
            case 0:
                 break;
            case 1:
                strcpy(cr->time, token);
                break;
            case 2:
                break;
            case 3:
                cr->lat_dir = token[0];
                cr->latitude = convert_to_decimal_degrees(token, cr->lat_dir);
                break;
            case 4:
                break;
            case 5:
                cr->long_dir = token[0];
                cr->longitude = convert_to_decimal_degrees(token, cr->long_dir);
                break;
            case 6:
                cr->fix_indicator = atoi(token);
                break;
            case 7:
                cr->num_satellites = atoi(token);
                break;
            case 8:
                cr->horiz_dilution = atof(token);
                break;
            case 9:
                cr->altitude = atof(token);
                break;
            case 10:
                cr->alt_unit = token[0];
                break;
            case 11:
                cr->geoidal_sep = atof(token);
                break;
            case 12:
                cr->geoidal_unit = token[0];
                break;
            case 13:
                strncpy(cr->checksum, token + 1, 2);
                break;
          }
          i++;
          token = strtok(NULL, ",");
      }
   }
}

void ProcessGPS_Packet(void)
{ 
  gps_coordinate cr;
  parse_GPS_message((const char *)gpsPacketBuffer, &cr);
  if (cr.fix_indicator > 0) {
    gpsData.gps_latitude = cr.latitude;
    gpsData.gps_longitude = cr.longitude;
    gpsData.gps_lock = true;
  }
  else
  {
    gpsData.gps_lock = false;
  }
  
  gpsIcon.data = '*';
  gpsProcessPacket = false;
}

bool GetGPSData(float *latitude, float *longitude)
{
  if (gpsData.gps_lock) {
    *latitude = gpsData.gps_latitude;
    *longitude = gpsData.gps_longitude;
  }
  return gpsData.gps_lock;
}
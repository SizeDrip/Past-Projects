
#include "serial_user.h"
#include <stdbool.h>


bool GetGPSData(float *latitude, float *longitude);

typedef struct {
  char time[7];
  float latitude;
  char lat_dir;
  float longitude;
  char long_dir;
  int fix_indicator;
  int num_satellites;
  float horiz_dilution;
  float altitude;
  char alt_unit;
  float geoidal_sep;
  char geoidal_unit;
  char checksum[3];
} gps_coordinate;

struct GPS_DATA{
          float gps_latitude;
          float gps_longitude;
         _Bool gps_lock;
};

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

extern struct GPS_DATA gpsData;

void ProcessGpsInputChar(comm_buffer_t * _buff_instance);
void ProcessGPS_Packet(void);

#define GPS_PACKET_BUFFER_LENGTH 150

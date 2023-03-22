
#include "serial_user.h"
#include <stdbool.h>


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

#include <stdbool.h> // for using the 'bool' data type

// Declare the gps_coord structure
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
} gps_coord;

void ProcessGpsInputChar(comm_buffer_t * _buff_instance);
void ProcessGPS_Packet(void);
void parse_gps_string(const char* gps_str, gps_coord* coord);
bool GetGPSData(float *latitude, float *longitude);


#define GPS_PACKET_BUFFER_LENGTH 150

#include <stdbool.h> // for using the 'bool' data type

// Declare the gps_latitude, gps_longitude, and gps_lock variables
extern float gps_latitude;
extern float gps_longitude;
extern bool gps_lock;

#include "gps.h"
#include "main.h"
#include "ux_manager.h"
#include <string.h>
#include "gps_circular_buffer.h"

uint8_t gpsPacketBuffer[GPS_PACKET_BUFFER_LENGTH] = "$GNGGA";
uint8_t gpsHeaderBuffer[7];

uint8_t gpsPacketBufferIndex = 0;
uint8_t gpsHeaderBufferIndex = 0;

gps_packet_buffer_status gpsPacketStatus = WAITING_FOR_PACKET_START;

uint8_t gpsProcessPacket = false;

struct GPS_DATA gpsData;

GPS_CircularBuffer gps_cb;

void ProcessGpsInputChar(uint8_t input_char) {
    gps_circular_buffer_push(&gps_cb, input_char);

    while (!gps_circular_buffer_empty(&gps_cb)) {
        uint8_t current_char = gps_circular_buffer_pop(&gps_cb);

        switch (gpsPacketStatus) {
            case WAITING_FOR_PACKET_START:
                if (current_char == '$') {
                    gpsHeaderBufferIndex = 0;
                    gpsHeaderBuffer[gpsHeaderBufferIndex++] = current_char;
                    gpsPacketStatus = IN_HEADER;
                }
                break;
            case IN_HEADER:
                gpsHeaderBuffer[gpsHeaderBufferIndex++] = current_char;

                if (gpsHeaderBufferIndex == 6) {
                    gpsHeaderBuffer[gpsHeaderBufferIndex] = '\0'; // Add null-terminator for strcmp
                    if (strcmp((char *)gpsHeaderBuffer, "$GNGGA") == 0) {
                        memcpy(gpsPacketBuffer, gpsHeaderBuffer, 6); // Copy the header to the packet buffer
                        gpsPacketBufferIndex = 6;
                        gpsPacketStatus = IN_PACKET;
                    } else {
                        gpsPacketStatus = WAITING_FOR_PACKET_START;
                    }
                }
                break;
            case IN_PACKET:
                gpsPacketBuffer[gpsPacketBufferIndex] = current_char;

                if (current_char == '\r' || current_char == '\n') {
                    gpsPacketStatus = WAITING_FOR_PACKET_START;
                } else if (current_char == '*') {
                    gpsPacketStatus = IN_CHECKSUM;
                }

                gpsPacketBufferIndex++;
                if (gpsPacketBufferIndex >= GPS_PACKET_BUFFER_LENGTH) {
                    gpsPacketBufferIndex = 0; // Reset the index only when a new sentence starts
                    gpsPacketStatus = WAITING_FOR_PACKET_START;
                }
                break;
            case IN_CHECKSUM:
                gpsPacketBuffer[gpsPacketBufferIndex] = current_char;

                if (current_char == '\r' || current_char == '\n') {
                    gpsProcessPacket = true; //NOTE: PRESS BLACK RESET BUTTON ON BOARD *BEFORE* RUNNING CODE. GPS SYNC BROKEN OTHERWISE
                    gpsPacketStatus = WAITING_FOR_PACKET_START;
                }

                if (gpsPacketBufferIndex >= GPS_PACKET_BUFFER_LENGTH) {
                    gpsPacketBufferIndex = 0;
                    gpsPacketStatus = WAITING_FOR_PACKET_START;
                }

                gpsPacketBufferIndex++;
                break;
        }
    }
}


void GPS_Init() {
    gps_circular_buffer_init(&gps_cb);
}

// ... Rest of the code remains unchanged ...


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

    // Clear the gpsPacketBuffer
    memset(gpsPacketBuffer, 0, sizeof(gpsPacketBuffer));
}


bool GetGPSData(float *latitude, float *longitude)
{
  if (gpsData.gps_lock) {
    *latitude = gpsData.gps_latitude;
    *longitude = gpsData.gps_longitude;
  }
  return gpsData.gps_lock;
}
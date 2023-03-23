#ifndef GPS_CIRCULAR_BUFFER_H
#define GPS_CIRCULAR_BUFFER_H

#include <stdbool.h>
#include <stdint.h>

#define GPS_CIRCULAR_BUFFER_SIZE 256

typedef struct {
    uint8_t buffer[GPS_CIRCULAR_BUFFER_SIZE];
    uint16_t head;
    uint16_t tail;
} GPS_CircularBuffer;

void gps_circular_buffer_init(GPS_CircularBuffer *cb);
bool gps_circular_buffer_empty(GPS_CircularBuffer *cb);
bool gps_circular_buffer_full(GPS_CircularBuffer *cb);
void gps_circular_buffer_push(GPS_CircularBuffer *cb, uint8_t data);
uint8_t gps_circular_buffer_pop(GPS_CircularBuffer *cb);
uint8_t GetNextCharFromBuffer(GPS_CircularBuffer *buffer);

bool IsGPSBufferEmpty(GPS_CircularBuffer *buffer);
uint8_t GetNextCharFromGPSBuffer(GPS_CircularBuffer *buffer);


#endif // GPS_CIRCULAR_BUFFER_H

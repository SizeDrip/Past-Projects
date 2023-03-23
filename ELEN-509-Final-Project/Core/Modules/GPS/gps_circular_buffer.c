#include "gps_circular_buffer.h"
#include "serial_user.h"
#include "Serial.h"

void gps_circular_buffer_init(GPS_CircularBuffer *cb) {
    cb->head = 0;
    cb->tail = 0;
}

bool gps_circular_buffer_empty(GPS_CircularBuffer *cb) {
    return cb->head == cb->tail;
}

bool gps_circular_buffer_full(GPS_CircularBuffer *cb) {
    return (cb->head + 1) % GPS_CIRCULAR_BUFFER_SIZE == cb->tail;
}

void gps_circular_buffer_push(GPS_CircularBuffer *cb, uint8_t data) {
    if (!gps_circular_buffer_full(cb)) {
        cb->buffer[cb->head] = data;
        cb->head = (cb->head + 1) % GPS_CIRCULAR_BUFFER_SIZE;
    }
}

uint8_t gps_circular_buffer_pop(GPS_CircularBuffer *cb) {
    uint8_t data = 0;
    if (!gps_circular_buffer_empty(cb)) {
        data = cb->buffer[cb->tail];
        cb->tail = (cb->tail + 1) % GPS_CIRCULAR_BUFFER_SIZE;
    }
    return data;
}

uint8_t GetNextCharFromBuffer(GPS_CircularBuffer *buffer) {
  uint8_t next_char = buffer->buffer[buffer->tail];
  buffer->tail = (buffer->tail + 1) % GPS_CIRCULAR_BUFFER_SIZE;
  return next_char;
}

bool IsGPSBufferEmpty(GPS_CircularBuffer *buffer) {
    return gps_circular_buffer_empty(buffer);
}


uint8_t GetNextCharFromGPSBuffer(GPS_CircularBuffer *buffer) {
  uint8_t next_char = buffer->buffer[buffer->tail];
  buffer->tail = (buffer->tail + 1) % GPS_CIRCULAR_BUFFER_SIZE;
  return next_char;
}


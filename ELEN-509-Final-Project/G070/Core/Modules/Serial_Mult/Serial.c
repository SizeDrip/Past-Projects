// Serial.c

// includes
#include "serial_user.h"
#include <stm32g0xx_ll_usart.h>


// modular variables
//uint8_t rxBuffer[RX_BUFFER_SIZE];
//uint8_t txBuffer[TX_BUFFER_SIZE];
//uint8_t nextSerialTxOut = 0;
//uint8_t nextSerialTxIn = 0;
uint8_t nextSerialRxIn = 0;
uint8_t nextSerialRx2Proc = 0;

// external variables
extern UART_HandleTypeDef huart1;


// Function to submit char and binary strings into the Xmit buffer
// it has a switch to decide if trailing zeros should be put into the buffer or ignored
uint8_t SendString(comm_buffer_t * _buff_instance, const char * _msg, uint16_t _len, strip_zeros _supressZeros, add_CRLF _add_crlf)
{
  uint8_t uartIdle = false;
  uint8_t status = 0;
  uint16_t freeBufferSpace;
  uint8_t i;
  uint16_t totalLength = _len;
  
  if (_add_crlf == AddCRLF) totalLength += 2;
  
  freeBufferSpace = CheckBuffer(_buff_instance);
  uartIdle = (_buff_instance->nextBufferOut == _buff_instance->nextBufferIn) ? true : false;
  
  if (totalLength < freeBufferSpace) {
    for (i = 0; i < _len; i++) {
      if ( (_msg[i] != 0) || (_supressZeros == NoStripZeros) ) {
        _buff_instance->buffer[_buff_instance->nextBufferIn] = _msg[i];
        if (++_buff_instance->nextBufferIn >= _buff_instance->bufferLength) _buff_instance->nextBufferIn = 0;
      }
    }
    
    if (_add_crlf == AddCRLF) {
      _buff_instance->buffer[_buff_instance->nextBufferIn] = '\r';
      if (++_buff_instance->nextBufferIn >= _buff_instance->bufferLength) _buff_instance->nextBufferIn = 0;

      _buff_instance->buffer[_buff_instance->nextBufferIn] = '\n';
      if (++_buff_instance->nextBufferIn >= _buff_instance->bufferLength) _buff_instance->nextBufferIn = 0;
    }
    
    if (uartIdle) {
      LL_USART_EnableIT_TXE(_buff_instance->portInstance);
    }
  }
  else status = 1;
  
  
  return status;
}


uint16_t CheckBuffer(comm_buffer_t * _buff_instance)
{
  uint16_t bufferAvailBytes = 0;
  
  if (_buff_instance->nextBufferOut > _buff_instance->nextBufferIn) bufferAvailBytes = _buff_instance->nextBufferOut - _buff_instance->nextBufferIn;
  else bufferAvailBytes = _buff_instance->bufferLength - (_buff_instance->nextBufferIn - _buff_instance->nextBufferOut);
  
  return bufferAvailBytes;
}


uint8_t IsBufferEmpty(comm_buffer_t * _buff_instance)
{
  uint8_t results = false;
  
  if (_buff_instance->nextBufferIn == _buff_instance->nextBufferOut)
    results = true;
  
  return results;
}

//// Function to submit char and binary strings into the Xmit buffer
//// it has a switch to decide if trailing zeros should be put into the buffer or ignored
//uint8_t SendBinary(const uint8_t * _msg, uint16_t _len)
//{
//  uint8_t uartIdle = false;
//  uint8_t status = 0;
//  uint16_t freeBufferSpace;
//  uint8_t i;
//  uint16_t totalLength = _len;
//  
//  freeBufferSpace = CheckBuffer();
//  uartIdle = (nextSerialTxOut == nextSerialTxIn) ? true : false;
//  
//  if (totalLength < freeBufferSpace) {
//    txBuffer[nextSerialTxIn] = ESCAPE_CHAR;
//    if (++nextSerialTxIn >= TX_BUFFER_SIZE) nextSerialTxIn = 0;
//    
//    for (i = 1; i < _len; i++) {
//      if (_msg[i] != ESCAPE_CHAR) {
//        txBuffer[nextSerialTxIn] = _msg[i];
//        if (++nextSerialTxIn >= TX_BUFFER_SIZE) nextSerialTxIn = 0;
//      }
//      else {
//        txBuffer[nextSerialTxIn] = ESCAPE_CHAR;
//        if (++nextSerialTxIn >= TX_BUFFER_SIZE) nextSerialTxIn = 0;
//
//        txBuffer[nextSerialTxIn] = ESCAPE_CHAR;
//        if (++nextSerialTxIn >= TX_BUFFER_SIZE) nextSerialTxIn = 0;
//      }
//      
//    }
//    
//    if (uartIdle) {
//      LL_LPUART_EnableIT_TXE(LPUART1);
//    }
//  }
//  else status = 1;
//  
//  
//  return status;
//}


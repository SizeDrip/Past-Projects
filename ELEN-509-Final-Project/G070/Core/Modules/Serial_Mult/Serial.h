// Serial.h


#ifndef _SERIAL_H_
#define _SERIAL_H_


// Copy the following into the serial interrupt handler in IRQn 0
// (not as a comment, of course)
//  HANDLE_INPUT_BUFFER

//  HANDLE_OUTPUT_BUFFER

//  HANDLE_ERRORS


// Includes
#include "main.h"
//#include "project.h"
#include <stdint.h>
#include "stm32g0xx_ll_lpuart.h"


// typedefs, structs, and enums
typedef enum _strip_zeros_ {
  StripZeros,
  NoStripZeros
} strip_zeros;

typedef enum _add_crlf_ {
  AddCRLF,
  NoAddCRLF
} add_CRLF;


//typedef struct _comm_buffer_t {
//  uint8_t nextBufferIn;
//  uint8_t nextBufferOut;
//  uint8_t buffer[BUFFER_SIZE];
//} comm_buffer_t;
//
//typedef struct _comm_buffer_s_t {
//  uint8_t nextBufferIn;
//  uint8_t nextBufferOut;
//  uint8_t buffer[SMALL_BUFFER_SIZE];
//} comm_buffer_s_t;
//
//typedef struct _comm_buffer_m_t {
//  uint8_t nextBufferIn;
//  uint8_t nextBufferOut;
//  uint8_t buffer[MED_BUFFER_SIZE];
//} comm_buffer_m_t;
//
//typedef struct _comm_buffer_l_t {
//  uint8_t nextBufferIn;
//  uint8_t nextBufferOut;
//  uint8_t buffer[LARGE_BUFFER_SIZE];
//} comm_buffer_l_t;
//
typedef struct _comm_buffer_p_t {
  uint8_t nextBufferIn;
  uint8_t nextBufferOut;
  uint8_t * buffer;
} comm_buffer_p_t;

typedef struct _comm_buffer_t {
  uint8_t nextBufferIn;
  uint8_t nextBufferOut;
  uint8_t * buffer;
  uint8_t bufferLength;
  USART_TypeDef *portInstance;
} comm_buffer_t;

// defines
#define TX_BUFFER_SIZE 50
#define RX_BUFFER_SIZE 250



// private modular variables


// public variables
//extern uint8_t rxBuffer[];
//extern uint8_t txBuffer[];
//extern uint8_t nextSerialTxOut;
//extern uint8_t nextSerialTxIn;
//extern uint8_t nextSerialRxIn;
//extern uint8_t nextSerialRx2Proc;
extern comm_buffer_t inputBuffer;
extern comm_buffer_t outputBuffer;


// public function prototypes
uint8_t SendString(comm_buffer_t * _buff_instance, const char * _msg, uint16_t _len, strip_zeros _supressZeros, add_CRLF _add_crlf);
uint16_t CheckBuffer(comm_buffer_t * _buff_instance);
uint8_t SendBinary(const uint8_t * _msg, uint16_t _len);
uint8_t IsBufferEmpty(comm_buffer_t * _buff_instance);




// MACROS for Serial Buffer handling
#define HANDLE_INPUT_BUFFER                                                     \
  if(LL_USART_IsActiveFlag_RXNE(USART1) && LL_USART_IsEnabledIT_RXNE(USART1))   \
  {                                                                             \
    inputBuffer.buffer[inputBuffer.nextBufferIn] = LL_USART_ReceiveData8(USART1);  \
    if (++inputBuffer.nextBufferIn >= inputBuffer.bufferLength) inputBuffer.nextBufferIn = 0;    \
  }

#define HANDLE_OUTPUT_BUFFER                                                    \
  if(LL_USART_IsEnabledIT_TXE(USART1) && LL_USART_IsActiveFlag_TXE(USART1))     \
  {                                                                             \
    if (outputBuffer.nextBufferOut != outputBuffer.nextBufferIn) {                                    \
      LL_LPUART_TransmitData8(USART1, outputBuffer.buffer[outputBuffer.nextBufferOut]);                \
      if (++outputBuffer.nextBufferOut >= outputBuffer.bufferLength) outputBuffer.nextBufferOut = 0;             \
    }                                                                           \
    else LL_USART_DisableIT_TXE(USART1);                                        \
  }                                                                             \
  if(LL_USART_IsEnabledIT_TC(USART1) && LL_USART_IsActiveFlag_TC(USART1))       \
  {                                                                             \
    LL_USART_ClearFlag_TC(USART1);                                              \
  }

#define HANDLE_ERRORS                                                           \
  if(LL_USART_IsEnabledIT_ERROR(USART1) && LL_USUART_IsActiveFlag_NE(USART1))    \
  {                                                                             \
    /* Call Error function */                                                   \
    /*UART_Error_Callback();*/                                                  \
  }


#endif

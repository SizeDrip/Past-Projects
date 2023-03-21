// Serial.h


#ifndef _SERIAL_H_
#define _SERIAL_H_


//------------------------------------
// Copy the following into the serial interrupt handler in IRQn 0
// in file "_it.c" (not as a comment, of course)
//  HANDLE_INPUT_BUFFER

//  HANDLE_OUTPUT_BUFFER

//  HANDLE_ERRORS


//------------------------------------
// Copy the following code into "main.c" in user code section 2
// (not as a comment, of course)
//  LL_USART_EnableIT_RXNE_RXFNE(USART1);
//  
//  SendString("\r\nBongiorno!\r\n", 14, StripZeros, AddCRLF);
//


//------------------------------------
// Copy the following code into the "_it.c" in ev section 
// (not as a comment, of course)
//extern uint8_t rxBuffer[];
//extern uint8_t txBuffer[];


//=====================================
// Includes
#include "main.h"
#include <stdint.h>
#include "stm32l0xx_hal.h"
#include <stm32l0xx_ll_usart.h>

// typedefs, structs, and enums
typedef enum _strip_zeros_ {
  StripZeros,
  NoStripZeros
} strip_zeros;

typedef enum _add_crlf_ {
  AddCRLF,
  NoAddCRLF
} add_CRLF;

// defines
#define TX_BUFFER_SIZE 50
#define RX_BUFFER_SIZE 50



// private modular variables


// public variables
extern uint8_t rxBuffer[];
extern uint8_t txBuffer[];

extern uint8_t nextSerialTxOut;
extern uint8_t nextSerialTxIn;
extern uint8_t nextSerialRxIn;
extern uint8_t nextSerialRx2Proc;

// public function prototypes
uint8_t SendString(const char * _msg, uint16_t _len, strip_zeros _supressZeros, add_CRLF _add_crlf);
uint16_t CheckBuffer(void);



// MACROS for Serial Buffer handling
#define HANDLE_INPUT_BUFFER                                                                \
  if(LL_USART_IsActiveFlag_RXNE(ACTIVE_USART) && LL_USART_IsEnabledIT_RXNE(ACTIVE_USART))  \
  {                                                                                        \
    rxBuffer[nextSerialRxIn] =  LL_USART_ReceiveData8(ACTIVE_USART);                       \
    if (++nextSerialRxIn >= RX_BUFFER_SIZE) nextSerialRxIn = 0;                            \
  }

#define HANDLE_OUTPUT_BUFFER                                                               \
  if(LL_USART_IsEnabledIT_TXE(ACTIVE_USART) && LL_USART_IsActiveFlag_TXE(ACTIVE_USART))    \
  {                                                                                        \
    if (nextSerialTxOut != nextSerialTxIn) {                                               \
      LL_USART_TransmitData8(ACTIVE_USART, txBuffer[nextSerialTxOut]);                     \
      if (++nextSerialTxOut >= TX_BUFFER_SIZE) nextSerialTxOut = 0;                        \
    }                                                                                      \
    else LL_USART_DisableIT_TXE(ACTIVE_USART);                                             \
  }                                                                                        \
  if(LL_USART_IsEnabledIT_TC(ACTIVE_USART) && LL_USART_IsActiveFlag_TC(ACTIVE_USART))      \
  {                                                                                        \
    LL_USART_ClearFlag_TC(ACTIVE_USART);                                                   \
    /*UART_CharTransmitComplete_Callback(); */                                             \
  }

#define HANDLE_ERRORS                                                                      \
  if(LL_USART_IsEnabledIT_ERROR(ACTIVE_USART) && LL_USART_IsActiveFlag_NE(ACTIVE_USART))   \
  {                                                                                        \
    /* Call Error function */                                                              \
    /*UART_Error_Callback();*/                                                             \
  }


#endif

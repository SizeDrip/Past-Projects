/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32g0xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32g0xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stm32g0xx_ll_usart.h"
#include "serial_user.h"
#include "Scheduler.h"
#include "stm32g0xx_ll_lpuart.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
// scheduler stuff
#define TEN_mS_SEED         10
#define TWENTYFIVE_mS_SEED  25
#define ONEHUNDRED_mS_SEED  100
#define ONE_S_SEED          1000

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */
SCHEDULER_VAR

extern uint8_t rs485_byteReceived;
extern uint8_t fo_byteReceived;
extern uint8_t pcProcessPacket;
extern comm_buffer_t pc_inputBuffer;
extern comm_buffer_t pc_outputBuffer;

uint8_t usart3ItEnabled = false;
uint8_t usart3RcvFlag = false;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;
extern UART_HandleTypeDef huart4;
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M0+ Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
  while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVC_IRQn 0 */

  /* USER CODE END SVC_IRQn 0 */
  /* USER CODE BEGIN SVC_IRQn 1 */

  /* USER CODE END SVC_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */
SCHEDULER_CODE

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32G0xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32g0xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles USART1 global interrupt / USART1 wake-up interrupt through EXTI line 25.
  */
void USART1_IRQHandler(void)
{
  /* USER CODE BEGIN USART1_IRQn 0 */
// HANDLE_INPUT_BUFFER                                                     
  if(LL_USART_IsActiveFlag_RXNE(USART1) && LL_USART_IsEnabledIT_RXNE(USART1))   
  {                                                                             
    gps_inputBuffer.buffer[gps_inputBuffer.nextBufferIn] = LL_USART_ReceiveData8(USART1);  
    if (++gps_inputBuffer.nextBufferIn >= gps_inputBuffer.bufferLength) gps_inputBuffer.nextBufferIn = 0;    
  }

// HANDLE_OUTPUT_BUFFER                                                    
  if(LL_USART_IsEnabledIT_TXE(USART1) && LL_USART_IsActiveFlag_TXE(USART1))     
  {                                                                             
    if (gps_outputBuffer.nextBufferOut != gps_outputBuffer.nextBufferIn) {                                    
      LL_USART_TransmitData8(USART1, gps_outputBuffer.buffer[gps_outputBuffer.nextBufferOut]);                
      if (++gps_outputBuffer.nextBufferOut >= gps_outputBuffer.bufferLength) gps_outputBuffer.nextBufferOut = 0;             
    }                                                                           
    else LL_USART_DisableIT_TXE(USART1);                                        
  }                                                                             
  if(LL_USART_IsEnabledIT_TC(USART1) && LL_USART_IsActiveFlag_TC(USART1))       
  {                                                                             
    LL_USART_ClearFlag_TC(USART1);                                              
  }

// HANDLE_ERRORS                                                           
  if(LL_USART_IsEnabledIT_ERROR(USART1) && LL_USART_IsActiveFlag_NE(USART1))    
  {                                                                             
    /* Call Error function */                                                   
    /*UART_Error_Callback();*/                                                  
  }

  /* USER CODE END USART1_IRQn 0 */
  HAL_UART_IRQHandler(&huart1);
  /* USER CODE BEGIN USART1_IRQn 1 */

  /* USER CODE END USART1_IRQn 1 */
}

/**
  * @brief This function handles USART2 global interrupt / USART2 wake-up interrupt through EXTI line 26.
  */
void USART2_IRQHandler(void)
{
  /* USER CODE BEGIN USART2_IRQn 0 */
// HANDLE_INPUT_BUFFER                                                     
  if(LL_USART_IsActiveFlag_RXNE(USART2) && LL_USART_IsEnabledIT_RXNE(USART2))   
  {                                                                             
    pc_inputBuffer.buffer[pc_inputBuffer.nextBufferIn] = LL_USART_ReceiveData8(USART2);  
    if (++pc_inputBuffer.nextBufferIn >= pc_inputBuffer.bufferLength) pc_inputBuffer.nextBufferIn = 0;    
  }

// HANDLE_OUTPUT_BUFFER                                                    
  if(LL_USART_IsEnabledIT_TXE(USART2) && LL_USART_IsActiveFlag_TXE(USART2))     
  {                                                                             
    if (pc_outputBuffer.nextBufferOut != pc_outputBuffer.nextBufferIn) {                                    
      LL_USART_TransmitData8(USART2, pc_outputBuffer.buffer[pc_outputBuffer.nextBufferOut]);                
      if (++pc_outputBuffer.nextBufferOut >= pc_outputBuffer.bufferLength) pc_outputBuffer.nextBufferOut = 0;             
    }                                                                           
    else LL_USART_DisableIT_TXE(USART2);                                        
  }                                                                             
  if(LL_USART_IsEnabledIT_TC(USART2) && LL_USART_IsActiveFlag_TC(USART2))       
  {                                                                             
    LL_USART_ClearFlag_TC(USART2);                                              
  }

// HANDLE_ERRORS                                                           
  if(LL_USART_IsEnabledIT_ERROR(USART2) && LL_USART_IsActiveFlag_NE(USART2))    
  {                                                                             
    /* Call Error function */                                                   
    /*UART_Error_Callback();*/                                                  
  }
  /* USER CODE END USART2_IRQn 0 */
  HAL_UART_IRQHandler(&huart2);
  /* USER CODE BEGIN USART2_IRQn 1 */

  /* USER CODE END USART2_IRQn 1 */
}

/**
  * @brief This function handles USART3 and USART4 interrupts.
  */
void USART3_4_IRQHandler(void)
{
  /* USER CODE BEGIN USART3_4_IRQn 0 */
  if (LL_USART_IsActiveFlag_RXNE(USART3) && LL_USART_IsEnabledIT_RXNE(USART3)) {
    rs485_byteReceived =  LL_USART_ReceiveData8(USART3); 
  }
  
  if (LL_USART_IsActiveFlag_RXNE(USART4) && LL_USART_IsEnabledIT_RXNE(USART4)) {
    fo_byteReceived =  LL_USART_ReceiveData8(USART4);                  
  }

  /* USER CODE END USART3_4_IRQn 0 */
  HAL_UART_IRQHandler(&huart3);
  HAL_UART_IRQHandler(&huart4);
  /* USER CODE BEGIN USART3_4_IRQn 1 */

  /* USER CODE END USART3_4_IRQn 1 */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

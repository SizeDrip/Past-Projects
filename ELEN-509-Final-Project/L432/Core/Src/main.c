/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "Scheduler.h"
#include "stm32l0xx_ll_usart.h"
#include "stm32l0xx_ll_lpuart.h"
#include "serial_user.h"
#include "SevenSegLED.h"
    
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef hlpuart1;

/* USER CODE BEGIN PV */
// scheduler stuff
extern uint8_t ten_mS_Flag;
extern uint8_t twentyfive_mS_Flag;
extern uint8_t hundred_mS_Flag;
extern uint8_t one_S_Flag;

// Keyboard/switches
uint8_t button = true;
uint8_t lastButton = true;
uint8_t dipSW = 0x07;

//protocol selection and remote address
uint8_t remoteAddress = 0;
uint8_t protocolSelection = 0;

// Seven Segment Stuff
dp_status_t dpOn = NoDp;

// variables
uint8_t counter = 0;
uint16_t displayNumber = 0;

// UART Test
uint8_t charCounter = 0;
uint8_t char2Send[2] = {0, 0};
extern uint8_t echoChar[1];
uint16_t noChar = 1;

// LED stuff
uint8_t toggleLED1 = false;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_LPUART1_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_LPUART1_UART_Init();
  /* USER CODE BEGIN 2 */
  // who are we and what are we doing?
  remoteAddress = HAL_GPIO_ReadPin(DIP_SW1_IN);
  protocolSelection = ( (HAL_GPIO_ReadPin(DIP_SW2_IN) << 1) | (HAL_GPIO_ReadPin(DIP_SW3_IN) << 0) );
  
  
  LL_LPUART_EnableIT_RXNE(LPUART1);

  InitSevenSegDisplay();
  ParseToDigits(0, BothDp, Blank);
  

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    //---------------------------------
    // 10mS Tasks 
    if (ten_mS_Flag) {
      ten_mS_Flag = false;

#if(!seg_test)
      UpdateDisplay();
#endif
    }  // end of 10mS Tasks
    //---------------------------------

    
    //---------------------------------
    // 25mS Tasks 
    if (twentyfive_mS_Flag) {
      twentyfive_mS_Flag = false;

    }  // end of 25mS Tasks
    //---------------------------------

    
    //---------------------------------
    // 100mS Tasks 
    if (hundred_mS_Flag) {
      hundred_mS_Flag = false;
      
      button = HAL_GPIO_ReadPin(SW_IN);
      if ((button == 0) && (lastButton == 1)) {
        // do some stuff...
        dpOn++;
        if (dpOn >= BothDp)
          dpOn = NoDp;
      }        
        
      lastButton = button;
      
      dipSW = (HAL_GPIO_ReadPin(DIP_SW3_IN) << 2) | (HAL_GPIO_ReadPin(DIP_SW2_IN) << 1) | (HAL_GPIO_ReadPin(DIP_SW1_IN) << 0);
        

    }  // end of 100mS Tasks
    //---------------------------------

    
    //---------------------------------
    // 1 Sec Tasks 
    if (one_S_Flag) {
      one_S_Flag = false;
      
      if (protocolSelection == TEST_CODE) {
        HAL_GPIO_TogglePin(LED0_OUT);
        toggleLED1 ^= true;
        if (toggleLED1 == true)
          HAL_GPIO_TogglePin(LED1_OUT);
      
#if (seg_test)
      digitToggle ^= 1;
      
      if (digitToggle == 1) {
        HAL_GPIO_WritePin(Digit_1, Digit_ON);
        HAL_GPIO_WritePin(Digit_2, Digit_OFF);
      }
      else {
        HAL_GPIO_WritePin(Digit_1, Digit_OFF);
        HAL_GPIO_WritePin(Digit_2, Digit_ON);
      }
      
      if (digitToggle == 1) {
        switch (segmentNumber) {
        case 0:
          HAL_GPIO_WritePin(Seg_A, Seg_ON);
          HAL_GPIO_WritePin(Seg_DP, Seg_OFF);
          break;
        case 1:
          HAL_GPIO_WritePin(Seg_B, Seg_ON);
          HAL_GPIO_WritePin(Seg_A, Seg_OFF);
          break;
        case 2:
          HAL_GPIO_WritePin(Seg_C, Seg_ON);
          HAL_GPIO_WritePin(Seg_B, Seg_OFF);
          break;
        case 3:
          HAL_GPIO_WritePin(Seg_D, Seg_ON);
          HAL_GPIO_WritePin(Seg_C, Seg_OFF);
          break;
        case 4:
          HAL_GPIO_WritePin(Seg_E, Seg_ON);
          HAL_GPIO_WritePin(Seg_D, Seg_OFF);
          break;
        case 5:
          HAL_GPIO_WritePin(Seg_F, Seg_ON);
          HAL_GPIO_WritePin(Seg_E, Seg_OFF);
          break;
        case 6:
          HAL_GPIO_WritePin(Seg_G, Seg_ON);
          HAL_GPIO_WritePin(Seg_F, Seg_OFF);
          break;
        case 7:
          HAL_GPIO_WritePin(Seg_DP, Seg_ON);
          HAL_GPIO_WritePin(Seg_G, Seg_OFF);
          break;
        }
        
        segmentNumber++;
        if (segmentNumber >= 8) segmentNumber = 0;
      }
#else 
      counter++;
            
      ParseToDigits(counter, dpOn, NotBlank);
#endif
      
      }
      else if (protocolSelection == MULTIDROP_485) {
      // do nothing here right now
      }
      
      
////// *** START OLD TEST CODE ***
//      char2Send[0] = charCounter++ + 0x40;
//      HAL_UART_Transmit(&hlpuart1, char2Send, 1, 1000);

//      if (charCounter > 0x3A) {
//        charCounter = 0;
//        char2Send[0] = '\n';
//        HAL_UART_Transmit(&hlpuart1, char2Send, 1, 1000);
//      }
////// *** END OLD TEST CODE ***
      
    } // end of 1Sec Tasks
    //---------------------------------

    
    //---------------------------------
    // Every time through the loop
    if (nextSerialRxIn != nextSerialRx2Proc) {
      ProcessReceiveBuffer();
    }
    
    if (processPacket == true) {
      processPacket = false;
      
      ProcessPacket();
    }
    
    // end Every time through the loop
    //---------------------------------
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_5;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_MSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_LPUART1;
  PeriphClkInit.Lpuart1ClockSelection = RCC_LPUART1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief LPUART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_LPUART1_UART_Init(void)
{

  /* USER CODE BEGIN LPUART1_Init 0 */

  /* USER CODE END LPUART1_Init 0 */

  /* USER CODE BEGIN LPUART1_Init 1 */

  /* USER CODE END LPUART1_Init 1 */
  hlpuart1.Instance = LPUART1;
  hlpuart1.Init.BaudRate = 9600;
  hlpuart1.Init.WordLength = UART_WORDLENGTH_8B;
  hlpuart1.Init.StopBits = UART_STOPBITS_1;
  hlpuart1.Init.Parity = UART_PARITY_NONE;
  hlpuart1.Init.Mode = UART_MODE_TX_RX;
  hlpuart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  hlpuart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  hlpuart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_RS485Ex_Init(&hlpuart1, UART_DE_POLARITY_HIGH, 0, 0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN LPUART1_Init 2 */

  /* USER CODE END LPUART1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, Segment_A_Pin|Segment_C_Pin|Segment_E_Pin|Segment_F_Pin
                          |Segment_G_Pin|Segment_DP_Pin|LED1_Pin|LED0_Pin
                          |Segment_B_Pin|Segment_D_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, Digit_1_Pin|Digit_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Segment_A_Pin Segment_C_Pin Segment_E_Pin Segment_F_Pin
                           Segment_G_Pin Segment_DP_Pin LED1_Pin LED0_Pin
                           Segment_B_Pin Segment_D_Pin */
  GPIO_InitStruct.Pin = Segment_A_Pin|Segment_C_Pin|Segment_E_Pin|Segment_F_Pin
                          |Segment_G_Pin|Segment_DP_Pin|LED1_Pin|LED0_Pin
                          |Segment_B_Pin|Segment_D_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : Digit_1_Pin Digit_2_Pin */
  GPIO_InitStruct.Pin = Digit_1_Pin|Digit_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : Switch_Pin */
  GPIO_InitStruct.Pin = Switch_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(Switch_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : DIP_SW1_Pin DIP_SW2_Pin DIP_SW3_Pin */
  GPIO_InitStruct.Pin = DIP_SW1_Pin|DIP_SW2_Pin|DIP_SW3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

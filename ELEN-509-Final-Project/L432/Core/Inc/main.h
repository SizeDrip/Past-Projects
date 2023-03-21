/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Segment_A_Pin GPIO_PIN_0
#define Segment_A_GPIO_Port GPIOA
#define Segment_C_Pin GPIO_PIN_2
#define Segment_C_GPIO_Port GPIOA
#define Segment_E_Pin GPIO_PIN_4
#define Segment_E_GPIO_Port GPIOA
#define Segment_F_Pin GPIO_PIN_5
#define Segment_F_GPIO_Port GPIOA
#define Segment_G_Pin GPIO_PIN_6
#define Segment_G_GPIO_Port GPIOA
#define Segment_DP_Pin GPIO_PIN_7
#define Segment_DP_GPIO_Port GPIOA
#define Digit_1_Pin GPIO_PIN_0
#define Digit_1_GPIO_Port GPIOB
#define Switch_Pin GPIO_PIN_8
#define Switch_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_9
#define LED1_GPIO_Port GPIOA
#define LED0_Pin GPIO_PIN_10
#define LED0_GPIO_Port GPIOA
#define Segment_B_Pin GPIO_PIN_11
#define Segment_B_GPIO_Port GPIOA
#define Segment_D_Pin GPIO_PIN_12
#define Segment_D_GPIO_Port GPIOA
#define Digit_2_Pin GPIO_PIN_3
#define Digit_2_GPIO_Port GPIOB
#define DIP_SW1_Pin GPIO_PIN_5
#define DIP_SW1_GPIO_Port GPIOB
#define DIP_SW2_Pin GPIO_PIN_6
#define DIP_SW2_GPIO_Port GPIOB
#define DIP_SW3_Pin GPIO_PIN_7
#define DIP_SW3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define true 1
#define false 0

#define Seg_A Segment_A_GPIO_Port, Segment_A_Pin
#define Seg_B Segment_B_GPIO_Port, Segment_B_Pin
#define Seg_C Segment_C_GPIO_Port, Segment_C_Pin
#define Seg_D Segment_D_GPIO_Port, Segment_D_Pin
#define Seg_E Segment_E_GPIO_Port, Segment_E_Pin
#define Seg_F Segment_F_GPIO_Port, Segment_F_Pin
#define Seg_G Segment_G_GPIO_Port, Segment_G_Pin
#define Seg_DP Segment_DP_GPIO_Port, Segment_DP_Pin

#define Digit_1 Digit_1_GPIO_Port, Digit_1_Pin
#define Digit_2 Digit_2_GPIO_Port, Digit_2_Pin

#define Seg_ON GPIO_PIN_RESET
#define Seg_OFF GPIO_PIN_SET

#define Digit_ON GPIO_PIN_SET
#define Digit_OFF GPIO_PIN_RESET

#define SW_IN Switch_GPIO_Port, Switch_Pin

#define DIP_SW3_IN DIP_SW3_GPIO_Port, DIP_SW3_Pin
#define DIP_SW2_IN DIP_SW2_GPIO_Port, DIP_SW2_Pin
#define DIP_SW1_IN DIP_SW1_GPIO_Port, DIP_SW1_Pin

#define LED0_OUT LED0_GPIO_Port, LED0_Pin
#define LED1_OUT LED1_GPIO_Port, LED1_Pin

// protocols:
#define TEST_CODE 0
#define MULTIDROP_485 1
#define PROTOCOL2 2
#define PROTOCOL3 3

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

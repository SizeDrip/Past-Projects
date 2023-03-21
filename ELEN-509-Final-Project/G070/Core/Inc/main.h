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
#include "stm32g0xx_hal.h"

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
#define LED1_Pin GPIO_PIN_12
#define LED1_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_14
#define LED3_GPIO_Port GPIOB
#define SW3_Pin GPIO_PIN_8
#define SW3_GPIO_Port GPIOA
#define SW1_Pin GPIO_PIN_10
#define SW1_GPIO_Port GPIOA
#define SW4_Pin GPIO_PIN_3
#define SW4_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_5
#define SW2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define true 1
#define false 0

#define SW1 SW1_GPIO_Port, SW1_Pin
#define SW2 SW2_GPIO_Port, SW2_Pin
#define SW3 SW3_GPIO_Port, SW3_Pin
#define SW4 SW4_GPIO_Port, SW4_Pin

#define LED1 LED1_GPIO_Port, LED1_Pin
#define LED2 LED2_GPIO_Port, LED2_Pin
#define LED3 LED3_GPIO_Port, LED3_Pin

#define LED_ON GPIO_PIN_RESET
#define LED_OFF GPIO_PIN_SET


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

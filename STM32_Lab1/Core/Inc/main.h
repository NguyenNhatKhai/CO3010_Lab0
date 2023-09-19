/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

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
#define LED_0R_Pin GPIO_PIN_5
#define LED_0R_GPIO_Port GPIOA
#define LED_0Y_Pin GPIO_PIN_6
#define LED_0Y_GPIO_Port GPIOA
#define LED_0G_Pin GPIO_PIN_7
#define LED_0G_GPIO_Port GPIOA
#define SEG_0A_Pin GPIO_PIN_0
#define SEG_0A_GPIO_Port GPIOB
#define SEG_0B_Pin GPIO_PIN_1
#define SEG_0B_GPIO_Port GPIOB
#define SEG_0C_Pin GPIO_PIN_2
#define SEG_0C_GPIO_Port GPIOB
#define LED_1R_Pin GPIO_PIN_8
#define LED_1R_GPIO_Port GPIOA
#define LED_1Y_Pin GPIO_PIN_9
#define LED_1Y_GPIO_Port GPIOA
#define LED_1G_Pin GPIO_PIN_10
#define LED_1G_GPIO_Port GPIOA
#define SEG_0D_Pin GPIO_PIN_3
#define SEG_0D_GPIO_Port GPIOB
#define SEG_0E_Pin GPIO_PIN_4
#define SEG_0E_GPIO_Port GPIOB
#define SEG_0F_Pin GPIO_PIN_5
#define SEG_0F_GPIO_Port GPIOB
#define SEG_0G_Pin GPIO_PIN_6
#define SEG_0G_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/*
 * clock_function.c
 *
 *  Created on: Sep 19, 2023
 *      Author: Nhat Khai
 */

#include "clock_function.h"

#define LED_NUMBER 12

int currentLED = 0;

void testClock(int duration) {
	if (timer0_flag == 1) {
		switch (currentLED) {
			case 0:
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, GPIO_PIN_RESET);
				break;
			case 1:
				HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
				break;
			case 2:
				HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
				break;
			case 8:
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_RESET);
				break;
			case 9:
				HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_RESET);
				break;
			case 10:
				HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
				break;
			case 11:
				HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
				break;
			default:
				break;
		}
		setTimer0(duration);
		currentLED = (currentLED + 1) % LED_NUMBER;
	}
}

void clearAllClock() {
	HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
}

void setNumberOnClock(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, GPIO_PIN_RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, GPIO_PIN_RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}

void clearNumberOnClock(int num) {
	switch(num) {
	case 0:
		HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, GPIO_PIN_SET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, GPIO_PIN_SET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, GPIO_PIN_SET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}

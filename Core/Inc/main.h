/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define EN_200V_Pin GPIO_PIN_13
#define EN_200V_GPIO_Port GPIOC
#define EN_HF_Pin GPIO_PIN_14
#define EN_HF_GPIO_Port GPIOC
#define RX_RESET_Pin GPIO_PIN_15
#define RX_RESET_GPIO_Port GPIOC
#define IE_RX_Pin GPIO_PIN_1
#define IE_RX_GPIO_Port GPIOC
#define MUX_TXB_Pin GPIO_PIN_2
#define MUX_TXB_GPIO_Port GPIOC
#define MUX_TXA_Pin GPIO_PIN_3
#define MUX_TXA_GPIO_Port GPIOC
#define LCD_ON_Pin GPIO_PIN_0
#define LCD_ON_GPIO_Port GPIOA
#define S_L_Pin GPIO_PIN_1
#define S_L_GPIO_Port GPIOA
#define ECHO_SEL2_Pin GPIO_PIN_2
#define ECHO_SEL2_GPIO_Port GPIOA
#define FLASH_CS_Pin GPIO_PIN_3
#define FLASH_CS_GPIO_Port GPIOA
#define CLK_S_Pin GPIO_PIN_4
#define CLK_S_GPIO_Port GPIOA
#define MUX_RXA_Pin GPIO_PIN_4
#define MUX_RXA_GPIO_Port GPIOC
#define MUX_RXB_Pin GPIO_PIN_5
#define MUX_RXB_GPIO_Port GPIOC
#define ENCA_Pin GPIO_PIN_0
#define ENCA_GPIO_Port GPIOB
#define ENCA_EXTI_IRQn EXTI0_IRQn
#define ENCB_Pin GPIO_PIN_1
#define ENCB_GPIO_Port GPIOB
#define ENCB_EXTI_IRQn EXTI1_IRQn
#define BTN_OK_Pin GPIO_PIN_2
#define BTN_OK_GPIO_Port GPIOB
#define BTN_OK_EXTI_IRQn EXTI2_IRQn
#define DBG_TX_Pin GPIO_PIN_10
#define DBG_TX_GPIO_Port GPIOB
#define DBG_RX_Pin GPIO_PIN_11
#define DBG_RX_GPIO_Port GPIOB
#define RST_LCD_Pin GPIO_PIN_14
#define RST_LCD_GPIO_Port GPIOB
#define BT_MODE_Pin GPIO_PIN_8
#define BT_MODE_GPIO_Port GPIOC
#define LCD_A0_Pin GPIO_PIN_9
#define LCD_A0_GPIO_Port GPIOC
#define DATA_IN_Pin GPIO_PIN_11
#define DATA_IN_GPIO_Port GPIOA
#define BTN_BACK_Pin GPIO_PIN_12
#define BTN_BACK_GPIO_Port GPIOA
#define BTN_BACK_EXTI_IRQn EXTI15_10_IRQn
#define EN_5V_Pin GPIO_PIN_10
#define EN_5V_GPIO_Port GPIOC
#define TX_OE_Pin GPIO_PIN_11
#define TX_OE_GPIO_Port GPIOC
#define TX_PULSE_Pin GPIO_PIN_12
#define TX_PULSE_GPIO_Port GPIOC
#define ECHO_SEL1_Pin GPIO_PIN_2
#define ECHO_SEL1_GPIO_Port GPIOD
#define LD1_Pin GPIO_PIN_3
#define LD1_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_4
#define LD2_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_5
#define LD3_GPIO_Port GPIOB
#define RESET_BT_Pin GPIO_PIN_8
#define RESET_BT_GPIO_Port GPIOB
#define ECHO_SEL0_Pin GPIO_PIN_9
#define ECHO_SEL0_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
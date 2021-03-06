/**
  ******************************************************************************
  * File Name          : mxconstants.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MXCONSTANT_H
#define __MXCONSTANT_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define INT_CLK_EN_Pin GPIO_PIN_2
#define INT_CLK_EN_GPIO_Port GPIOA
#define EN_PLL_Pin GPIO_PIN_3
#define EN_PLL_GPIO_Port GPIOA
#define LD_PLL_Pin GPIO_PIN_4
#define LD_PLL_GPIO_Port GPIOA
#define CS_PLL_Pin GPIO_PIN_5
#define CS_PLL_GPIO_Port GPIOA
#define CE_PLL_Pin GPIO_PIN_6
#define CE_PLL_GPIO_Port GPIOA
#define ADC_POWER_DET_Pin GPIO_PIN_7
#define ADC_POWER_DET_GPIO_Port GPIOA
#define FILT2_Pin GPIO_PIN_0
#define FILT2_GPIO_Port GPIOB
#define FILT3_Pin GPIO_PIN_1
#define FILT3_GPIO_Port GPIOB
#define FILT4_Pin GPIO_PIN_8
#define FILT4_GPIO_Port GPIOA
#define FILT1_Pin GPIO_PIN_9
#define FILT1_GPIO_Port GPIOA
#define PWDWN_Pin GPIO_PIN_10
#define PWDWN_GPIO_Port GPIOA
#define ATTEN_CS_Pin GPIO_PIN_11
#define ATTEN_CS_GPIO_Port GPIOA
#define RED_LED_Pin GPIO_PIN_12
#define RED_LED_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MXCONSTANT_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

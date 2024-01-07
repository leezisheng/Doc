/**
  ******************************************************************************
  * File Name          : Templete.h
  * Description        : This file uses keystroke detection as an example to show a 
  *						 standard header file template
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __KEY_H
#define __KEY_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Common macro definitions---------------------------------------------------*/
/* The key is pressed at low level,KEY_ON=0 ，KEY_OFF=1 */
#define KEY_ON 0
#define KEY_OFF 1
/* Data structure declaration-------------------------------------------------*/

/* Function declaration-------------------------------------------------------*/
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif
#endif /*__KEY_H*/

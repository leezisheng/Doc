/**
  ******************************************************************************
  * File Name          : Templete.c
  * Description        : This file uses key detection as an example to show the 
  *                      standard source file template
  ******************************************************************************
 */
  
/* Includes ------------------------------------------------------------------*/
#include "Templete.h"
#include "numtype.h"

/* External function declaration----------------------------------------------*/


/* Private macro definitions--------------------------------------------------*/


/* Global variable------------------------------------------------------------*/


/* Static function definition-------------------------------------------------*/


/* Function definition--------------------------------------------------------*/

/* 
* @description : Check whether the key is pressed
* @param {GPIO_TypeDef*} GPIOx      : The GPIO type can be GPIOA, GPIOB, etc
* @param {uint16_t}      GPIO_Pin   : GPIO port
* @return uint8_t}       KEY_STATUS : Key state, pressed or released
* @author: leeqingshui 
*/
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin)
{
	/* Check if any buttons are pressed */
	if (HAL_GPIO_ReadPin(GPIOx,GPIO_Pin) == KEY_ON ) 
	{
	/* Waiting for key release */
	    while (HAL_GPIO_ReadPin(GPIOx,GPIO_Pin) == KEY_ON);
		return KEY_ON;
	} 
	else
		return KEY_OFF;
}





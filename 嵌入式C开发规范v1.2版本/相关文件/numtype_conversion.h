/**
  ******************************************************************************
  * File Name          : numtype_conversion.h
  * Description        : This file includes the declaration of some of the most common data type conversion functions 
  *                      such as string to hexadecimal, hexadecimal to string, decimal to string, string to decimal, 
  *                      u8 to u32 conversion, big endian to small endian conversion, float to uint16 conversion, etc
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _NUMTYPE_CONV_
#define _NUMTYPE_CONV_
#ifdef __cplusplus
 extern "C" {
#endif
     
/* Includes ------------------------------------------------------------------*/
#include "numtype.h"
     
/* Common macro definitions---------------------------------------------------*/
     
     
/* Data structure declaration-------------------------------------------------*/
     
/* Extern Variable------------------------------------------------------------*/


/* Function declaration-------------------------------------------------------*/

/* String to hexadecimal function */
void  NumTypeConv_StrToHex(char *pbDest, char *pbSrc, int32_t nLen);
/* Hexadecimal to string function */
void  NumTypeConv_HexToStr(char *pszDest, char *pbSrc, int32_t nLen);
/* String to integer function */
int32_t NumTypeConv_atoi(const char *str);
/* Integer to string function */
char* NumTypeConv_itoa(int32_t value, char *string, int32_t radix);
/* u32 to u8 function */
void  NumTypeConv_U32ToU8Array(uint8_t *buf, uint32_t u32Value);
/* u8 to u32 function */
void  NumTypeConv_U8ArrayToU32(uint8_t *buf, uint32_t *u32Value);
/* The small - start and small-end conversion function of an unsigned 16-bit variable */
uint16_t NumTypeConv_BigToLittle_16Bit(uint16_t value);
/* The small - start and small-end conversion function of an unsigned 32-bit variable */
uint16_t NumTypeConv_BigToLittle_32Bit(uint16_t value);
/* The float32 and uint16 type conversion function */
void  NumTypeConv_Float32ToU16(float32_t f_value, uint16_t* p_value_h, uint16_t* p_value_l);

#ifdef __cplusplus
}
#endif
#endif /*_NUMTYPE_CONV_*/



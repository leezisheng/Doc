/**
  ******************************************************************************
  * File Name          : numtype_conversion.c
  * Description        : This file includes the definition of some of the most common data type conversion functions 
  *                      such as string to hexadecimal, hexadecimal to string, decimal to string, string to decimal, 
  *                      u8 to u32 conversion, big endian to small endian conversion, float to uint16 conversion, etc
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "numtype_conversion.h"
#include <ctype.h>

/* External function declaration----------------------------------------------*/

/* Private macro definitions--------------------------------------------------*/
  
/* Global variable------------------------------------------------------------*/

/* Static function definition-------------------------------------------------*/

/* Function definition--------------------------------------------------------*/

/* String to hexadecimal function */
void NumTypeConv_StrToHex(char *pbDest, char *pbSrc, int32_t nLen)
{
  char h1,h2;
  char s1,s2;
  int32_t i;
 
    for (i=0; i<nLen/2; i++)
    {
        h1 = pbSrc[2*i];
        h2 = pbSrc[2*i+1];
 
        /* toupper converts to uppercase */
        s1 = toupper(h1) - 0x30; 
        if (s1 > 9)
            s1 -= 7;
        s2 = toupper(h2) - 0x30;
        if (s2 > 9)
            s2 -= 7;
 
        pbDest[i] = s1*16 + s2;
    }
}

/* Hexadecimal to string function */
void NumTypeConv_HexToStr(char *pszDest, char *pbSrc, int32_t nLen)
{
    char ddl, ddh;
    
    for (int32_t i = 0; i < nLen; i++)
    {
        ddh = 48 + pbSrc[i] / 16;
        ddl = 48 + pbSrc[i] % 16;
        if (ddh > 57) ddh = ddh + 7;
        if (ddl > 57) ddl = ddl + 7;
        pszDest[i * 2] = ddh;
        pszDest[i * 2 + 1] = ddl;
    }
    
    pszDest[nLen * 2] = '\0';
}

/* String to integer function */
int32_t NumTypeConv_atoi(const char *str)
{
    int32_t value = 0;
    
    /* Judge the symbol */
    int32_t flag = 1; 
    
    // Skip the space before the string
    while (*str == ' ')  
    {
        str++;
    }
    // If the first character is' - ', it indicates that it may be a negative number
    if (*str == '-') 
    {
        flag = 0;
        str++;
    }
    // If the first character is' + ', it indicates that the number is probably positive
    else if (*str == '+') 
    {
        flag = 1;
        str++;
    }
    // If the first character is not a '+', '-' or a numeric character, return 0 directly
    else if (*str >= '9' || *str <= '0') 
    {
        return 0;    
    }
    // Ends conversion when a non-numeric character or '\0' is encountered
    while (*str != '\0' && *str <= '9' && *str >= '0')
    {
        // Converts numeric characters to corresponding integers
        value = value * 10 + *str - '0'; 
        str++;
    }
    // case £ºNegative numbers
    if (flag == 0) 
    {
        value = -value;
    }
    return value;
}

/* Integer to string function */
char* NumTypeConv_itoa(int32_t value, char *string, int32_t radix)
{
    int32_t i,d;
    int32_t flag = 0;
    char    *ptr = string;

    /* This implementation only works for decimal numbers. */
    if (radix != 10)
    {
        *ptr = 0;
        return string;
    }

    if (!value)
    {
        *ptr++ = 0x30;
        *ptr = 0;
        return string;
    }

    /* if this is a negative value insert the minus sign. */
    if (value < 0)
    {
        *ptr++ = '-';

        /* Make the value positive. */
        value *= -1;

    }

    for (i = 10000; i > 0; i /= 10)
    {
        d = value / i;

        if (d || flag)
        {
            *ptr++ = (char)(d + 0x30);
            value -= (d * i);
            flag = 1;
        }
    }

    /* Null terminate the string. */
    *ptr = 0;

    return string;
}

/* u32 to u8 function */
void NumTypeConv_U32ToU8Array(uint8_t *buf, uint32_t u32Value)
{
    buf[0] = ((u32Value >> 24) & 0xFF);
    buf[1] = ((u32Value >> 16) & 0xFF);
    buf[2] = ((u32Value >> 8) & 0xFF);
    buf[3] = ( u32Value & 0xFF);
}

/* u8 to u32 function */
void  NumTypeConv_U8ArrayToU32(uint8_t *buf, uint32_t *u32Value)
{
    *u32Value = (buf[0] <<24) + (buf[1] <<16) + (buf[2] <<8) + (buf[3] <<0);
}

/* The small - start and small-end conversion function of an unsigned 16-bit variable */
uint16_t NumTypeConv_BigToLittle_16Bit(uint16_t value)
{
    return (short)((value & 0x00FFU) << 8 | (value & 0xFF00U) >> 8);
}

/* The small - start and small-end conversion function of an unsigned 32-bit variable */
uint16_t NumTypeConv_BigToLittle_32Bit(uint16_t value)
{
    return (int)((value & 0x000000FFU) << 24 | (value & 0x0000FF00U) << 8 |( value & 0x00FF0000U) >> 8 | (value & 0xFF000000U) >> 24);
}

/* The float32 and uint16 type conversion function */
void NumTypeConv_Float32ToU16(float32_t f_value, uint16_t* p_value_h, uint16_t* p_value_l)
{
    uint32_t value_tmp;
    uint16_t value_h;
    uint16_t value_l;

    value_tmp = *(int *)&f_value;

    value_h = value_h >> 16;
    value_l = value_l & ~(0xFFFF<<16);
    
    *p_value_h = value_h;
    *p_value_l = value_l;
}


  
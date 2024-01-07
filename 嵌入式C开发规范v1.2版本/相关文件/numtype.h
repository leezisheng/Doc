/**
  ******************************************************************************
  * File Name          : numtype.h
  * Description        : The file includes some definitions and renames of basic 
  *						 data types and compound data types, which is convenient 
  *						 for main business programs to be transplanted between different microcontrollers
  ******************************************************************************
  */
#ifndef _NUMTYPE_H_ 
#define _NUMTYPE_H_ 

#ifdef  __cplusplus
Extern  "C"  {
#endif

#include <stdint.h>

/* ======================================= Basic data types ===========================================*/

/* Signed */
typedef signed char		        int8_t;
typedef short int		        int16_t;
typedef int			            int32_t;

/* Unsigned */
typedef unsigned char		    uint8_t;
typedef unsigned short int	    uint16_t;
typedef unsigned int		    uint32_t;

/* Float */
typedef float 					float32_t;
typedef double 					float64_t;

/* Signed pointer */
typedef signed char	*	        p_int8_t;
typedef short int*	            p_int16_t;
typedef int*			        p_int32_t;

/* Unsigned pointer */
typedef unsigned char*		    p_uint8_t;
typedef unsigned short int* 	p_uint16_t;
typedef unsigned int*		    p_uint32_t;

/* Void pointer */
typedef void*                   p_void;

/* Float pointer */
typedef float* 					p_float32_t;
typedef double* 			    p_float64_t;


/* ======================================= Compound data type ===========================================*/

/* Function return type */
typedef enum
{
    Operation_Success = 1,
	Operation_Fail    = 0,
	Operation_Wait   = 2 
} t_FuncRet;

/* Boolean type definition */
typedef enum 
{
	FALSE = 0,
	TRUE = 1
} bool;

#ifdef __cplusplus
}
#endif

#endif

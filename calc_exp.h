/*********************************************************************
*
*文件：button.h
*功能：
*备注：
*
*********************************************************************/

#ifndef __CALC_EXP_H__
#define __CALC_EXP_H__


#include "hpfloat.h"



/************************************函数************************************/
/***********************************************************
*
*函数：calc_exp()
*功能：计算表达式的值
*返回：0--未出错
*      1--语法错误
*      2--计算时出错
*      表达式的值存储在*result中
***********************************************************/
extern int calc_exp(const char *str, hpfloat *result);



#endif
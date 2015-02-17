/*********************************************************************
*
*文件：math_fun.h
*功能：
*备注：
*
*********************************************************************/
#ifndef __MATH_FUN_H__
#define __MATH_FUN_H__

#include "hpfloat.h"

/*****************************************************************
*函数：hp_sqrt()
*功能：高精度开方
******************************************************************/
hpfloat *hp_sqrt(hpfloat *hp_num);


/*****************************************************************
*函数：hp_sqrt3()
*功能：高精度开立方
******************************************************************/
hpfloat *hp_sqrt3(hpfloat *hp_num);


/*****************************************************************
*函数：hp_sin()
*功能：高精度正弦
******************************************************************/
hpfloat *hp_sin(hpfloat *x);


/*****************************************************************
*函数：hp_cos()
*功能：高精度余弦
******************************************************************/
hpfloat *hp_cos(hpfloat *x);


/*****************************************************************
*函数：hp_tan()
*功能：高精度正切
******************************************************************/
hpfloat *hp_tan(hpfloat *x);


/*****************************************************************
*函数：hp_sinh()
*功能：高精度双曲正弦
******************************************************************/
hpfloat *hp_sinh(hpfloat *x);


/*****************************************************************
*函数：hp_cosh()
*功能：高精度双曲余弦
******************************************************************/
hpfloat *hp_cosh(hpfloat *x);


/*****************************************************************
*函数：hp_tanh()
*功能：高精度双曲正切
******************************************************************/
hpfloat *hp_tanh(hpfloat *x);


/*****************************************************************
*函数：hp_exp()
*功能：高精度幂函数e^x
******************************************************************/
hpfloat *hp_exp(hpfloat *x);


/*****************************************************************
*函数：hp_ln()
*功能：高精度自然对数
******************************************************************/
hpfloat *hp_ln(hpfloat *x);


/*****************************************************************
*函数：hp_lg()
*功能：高精度常用对数
*****************************************************************/
hpfloat *hp_lg(hpfloat *x);


/*****************************************************************
*函数：hp_pow()
*功能：高精度指数函数
******************************************************************/
hpfloat *hp_pow(const hpfloat *x, const hpfloat *power, hpfloat *result);



#endif
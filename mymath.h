#ifndef __MYMATH_H__
#define __MYMATH_H__
#include "common.h"
#include "include.h"

#define Max_2_num(x1,x2)       ((x1>x2)? x1:x2)
#define Min_2_num(x1,x2)       ((x1<x2)? x1:x2)

int max_s16(int temp[],u16 num);
u8 max_u8(u8 temp[],u16 num);
int min_s16(int temp[],u16 num);
u8 min_u8(u8 temp[],u16 num);
int power_s16(int buttom,u8 po);
int sum_s16(int input[],u16 num);
int sum_u8(u8 input[],u16 num);
u16 abs_s16(int i);
int sum_point(u8 input[],u8 num);
//u8 L_Diff_Test(int* Origin,u16 n,float* Circle_k,u8* _Turn);
//u8 R_Diff_Test(int* Origin,u16 n,float* Circle_k,u8* _Turn);
float calculate_fangcha(s16 *a,u16 cnt);
float myInvSqrt(float x);	/*快速开平方求倒*/
u8 max_u8_index(u8 temp[],u16 num);
u8 min_u8_index(u8 temp[],u16 num);
int ave_s16(int temp[],const u16 num);
#endif
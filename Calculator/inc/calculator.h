/**
* @file calculator.h
*
*/
#include<stdlib.h>
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

typedef int (*fptr)(int a, int b);    ///Aliasing fptr as function pointer that takes two ints as input

int add(int x,int y);                 ///Funtion that accepts two ints as input and return their sum

int subtract(int x,int y);            ///Function that accepts two ints as input and returns their difference
/**
* Calculator to return sum and difference of two integers
* @param[in] operation Specifies what operation takes place
* @param[in] num1 first number fed
* @param[in] num2 second number fed
* @return sum if operation = 0
* @return difference if operation = 1
* @note Returns "operation not specified" for an other value of operation
*/


int calculator(int operation,int num1,int num2);

#endif /* #ifndef __CALCULATOR_H__ */

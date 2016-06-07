 ///
 /// @file    overload.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 14:53:24
 ///

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//进行Ｃ和Ｃ＋＋混合编程
#ifdef __cplusplus
extern "C" //包含在该区域的内容是以Ｃ语言的方式进行调用
{
#endif

int add(int a, int b)
{
	return a + b;
}

#ifdef __cplusplus
} 
#endif


int add(int a, double b, int c)
{
	return a + b + c;
}

int main(void)
{
	int a = 3;
	int b = 4;
	printf("a + b = %d\n", add(a, b));
	return 0;
}

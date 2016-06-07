 ///
 /// @file    overload.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 14:53:24
 ///

#include <stdio.h>
#include <iostream>
//C++支持函数重载:　
//实现原理：名字改编(name mangling)
//    当函数名称相同时，会根据形参的个数，类型，顺序
//    来进行名字改编
//对源文件只进行编译，得到的目标文件.o 可以使用nm命令
//进行查看

int add(int a, int b)
{
	return a + b;
}	

#if 0
int add(int a, int b)
{
	return a - b;
}
#endif

double add(double a, double b)
{
	return a + b;
}
 
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

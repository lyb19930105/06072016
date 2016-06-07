 ///
 /// @file    overload.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 14:53:24
 ///

#include <stdio.h>

//C语言不支持重载

int add(int a, int b)
{
	return a + b;
}	
 
int add(int a, int b, int c)
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

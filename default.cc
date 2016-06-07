 ///
 /// @file    default.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 14:53:24
 ///

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

int add(int a, int b)
{
	return a + b;
}	
 
//默认参数或者缺省参数的赋值只能从右到左进行
int add(int a, int b, int c = 0)
{
	return a + b + c;
}

int main(void)
{
	int a = 3;
	int b = 4;
	cout << add(a) << endl;
	printf("a + b = %d\n", add(a, b));
	return 0;
}

 ///
 /// @file    reference.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 11:05:48
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//引用与指针的相同点：
// >  都有地址的概念(引用底层实现是指针)

//引用与指针的区别:
//1. 引用不能为空，指针可以为NULL
//2. 引用必须要初始化, 指针不一定
//3. 引用一经绑定到某个变量，之后就不能再修改其指向;
//   指针没有这个限制



int main(void)
{
	//int * pp = NULL;
	int a = 10;
	int b = 20;
	&a;//取地址运算符
	cout << "a    = " << a << endl;

	int & refa = a;//引用就是一个变量的别名
				   //引用一经初始化，不会再改变其指向
	refa = 5;
	cout << "refa = " << refa << endl;
	cout << "a    = " << a << endl;

	refa = b;//把b的值赋值给a
	cout << "refa = " << refa << endl;
	cout << "a    = " << a << endl;

	//int & refb;//引用不能独立存在，必须要进行初始化
	
	//int &refc = 1;//字面值(literal)
	//&1;//Error
	

	const int &refc = 1;
	cout << "refc = " << refc << endl;
	return 0;
}

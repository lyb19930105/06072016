 ///
 /// @file    const.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 10:01:13
 ///
 
#include <iostream>
using std::cout;
using std::endl;


#define MAX 100 // 发生时机：预编译时
				// 简单的字符串替换,不具备类型检查功能
				// 有可能会把错误带到运行时
//如果是要使用常量，推荐使用const关键字

int main(void)
{
	//发生时机是编译时，具有类型检查功能
	const int a = 1;//const 修饰的变量是不能被修改的(常量)
	//a = 2;//Error

	//const int b;//常量必须进行初始化
	
	int const b = 2;

	int c = 3;

	int * pp = &c;

	const int * pa = &c;//(pointer to const) 常量指针
	//*pa = 4;//Error，const的作用是：
	//指针pa所指向的值不能被修改
	int const * pb = &c;//与29行的语句表达的意思是一样的
	//*pb = 4;//Error
	
	c = 10;
	cout << "c = " << c << endl;
	
	int * const pc = &c;//(const pointer)  指针常量
	*pc = 4;//pc所指向的变量c的值是可以被修改的
	cout << "*pc = " << *pc << endl;
	cout << "c   = " << c << endl; 

	int d = 5;
	//pc = &d;//Error,const作用：pc指针本身的值不能被修改


	const int * const pd = &d;//两者都不能修改
	//*pd = 11;//Error
	//pd = &c;//Error

	return 0;
}

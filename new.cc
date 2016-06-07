 ///
 /// @file    new.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 10:47:48
 ///

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

//malloc是库函数，它只负责开辟空间，
//该空间的内容是不确定的并不会初始化
//free进行释放
//
//new是一个表达式，它负责开辟空间，并且
//能够初始化该空间的内容的
//delete 进行释放

int main(void)
{
	int * pa = (int *)malloc(sizeof(int));
	cout << "*pa = " << *pa << endl;
	*pa = 10;
	cout << "*pa = " << *pa << endl;
		
	free(pa);

	int *pc = (int *)malloc(sizeof(int) * 10);
	free(pc);


	int * pb = new int(1);
	cout << "*pb = " << *pb << endl;


	//申请数组时，初始化值需要在[]后面加上()
	//如果不加，初始值是不确定的
	int *pd = new int[10]();
	for(int idx = 0; idx != 10; ++idx)
	{
		cout << pd[idx] << " ";
	}
	cout << endl;

	delete pb;
	delete [] pd;//对于数组的释放必须加上[]
}

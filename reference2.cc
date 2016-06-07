 ///
 /// @file    reference2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 11:29:46
 ///
 
#include <iostream>
using std::cout;
using std::endl;

#if 0
void swap(int x, int y)//发生的是值传递, 拷贝
{
	int temp = x;
	x = y;
	y = temp;
}
#endif

void swap(int * px, int * py)//发生的是地址传递，本质是值传递
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void swap(int & refx, int & refy)
{//在函数传参时，不需要进行复制,直接操作实参本身
 //会减少复制的开销,从而能够提高执行效率
 //; 在使用时更直观，更容易理解;
	int temp = refx;
	refx = refy;
	refy = temp;
}

int arr[5] = {0, 1, 2, 3, 4};

int & func()//引用作为函数返回值
{
	return arr[0];
}

int * func1()
{
	int x = 4;
	return &x;
}

//不能返回局部变量的引用
int & func2()
{
	int x = 4;//当函数运行结束之后，局部变量的生命周期已经结束
	return x;
}
//不要轻易返回堆空间对象的引用
int & func3()
{
	int * px = new int(10);
	return *px;
}

int main(void)
{
	int a = 3;
	func() = 10;
	cout << a + func() << endl;

	cout << arr[0] << endl;
	cout << func2() << endl;

	int & b = func3();
	cout << "b = " << b << endl;
	delete (&b);

	
	//该表达式执行完毕之后，就会发生内存泄露
	cout << "a + func3() = " << a + func3() << endl;

	return 0;
}

int test(void)
{
	int a = 3;
	int b = 4;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//swap(&a,&b);
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}


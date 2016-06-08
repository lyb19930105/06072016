 ///
 /// @file    reload.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-08 16:17:49
 ///
 
#include <iostream>
using namespace std;

int add(int a,float b)
{
	return a+b;
}
int add(float a,int b)
{
	return a+b+1;
}
int main(void)
{
	int a=1;
	float b=2;
	cout<<"a+b="<<add(a,b)<<endl;
	cout<<"a+b="<<add(b,a)<<endl;
}

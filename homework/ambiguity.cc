 ///
 /// @file    ambiguity.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-08 16:21:41
 ///
 
#include <iostream>
using namespace std;

int add(int a,int b,int c=0)
{
	return a+b+c;
}
int add(int a,int b)
{
	return a+b;
}
int main(void)
{
	int a=1,b=2;
	cout<<"a+b="<<add(a,b)<<endl;
}



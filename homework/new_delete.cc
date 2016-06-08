 ///
 /// @file    new_delete.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-08 16:08:50
 ///
 
#include <iostream>
using namespace std;
int main(void)
{
	int*p=new int[4];
	for(int i=0;i<4;i++)
		p[i]=i+1;
	for(int i=0;i<4;i++)
		cout<<"p["<<i<<"]="<<p[i]<<endl;
	delete []p;
}

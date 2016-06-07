 ///
 /// @file    io.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 16:28:34
 ///
 
#include <stdio.h>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(void)
{
#if 0
	int a;
	scanf("%d", &a);
	cout << "a = " << a << endl;
#endif

	int b;
	//while(cin >> b)
	//	cout << b << endl;
	
	string s;

#if 0
	while(cin >> s)//以空格来对字符串进行分隔
		cout << s << endl;
#endif

	while(getline(cin, s))
	{
		cout << s << endl;
	}
	return 0;
}



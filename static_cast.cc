 ///
 /// @file    static_cast.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 14:47:01
 ///
 
#include <iostream>
using std::cout;
using std::endl;


int main(void)
{
	double b = 3.14159;
	int a = (int)b;
	int c = int(b);
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;

	int d = static_cast<int>(b);
	cout << "d = " << d << endl;
	//const_cast/ dynamic_cast/ reinterpret_cast

	return 0;
}

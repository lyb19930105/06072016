 ///
 /// @file    string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-06-07 15:53:31
 ///
 
#include <stdio.h>
#include <string.h>

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int test0(void)
{
	int a = 3;
	//1;//int

	string s1 = "hello";
	string s2 = ",world";
	string s3 = s1 + s2 + "shenzhen";//const char * 
	cout << s3 << endl;
	cout << endl;
	cout << "sizeof(s3) = " << sizeof(s3) << endl;
	cout << "s3.size() = " << s3.size() << endl;

	string s4 = "hello,world";
	string s5 = s4.substr(0, 5);
	cout << "s5 = " << s5 << endl;

	string s6 = s4.substr(s4.find("world"), 5);
	cout << "s6 = " << s6 << endl;

	for(int idx = 0; idx != s4.size(); ++idx)
	{
		//cout << s4[idx] << endl;
		s4[idx] += 1;
	}
	cout << "s4 = " << s4 << endl;


	//通过迭代器的方式进行访问
	string::iterator it = s4.begin();
	for(; it != s4.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << endl;
	
	return 0;
}


int test1(void)
{
	char pstr[] = "hello,world";// '\0'
	cout << sizeof(pstr) << endl;
	cout << strlen("hello,world") << endl;

	for(int idx = 0; idx < strlen(pstr); ++ idx)
	{
		cout << pstr[idx] << endl;
	}
	cout << endl;

	//cout << pstr << endl;
	//printf("%s\n", pstr);


	char pstr1[] = "hello";
	char pstr2[] = ",world";
	
	char * pstr3 = new char[strlen(pstr1) + strlen(pstr2) + 1];
	strcpy(pstr3, pstr1);
	strcat(pstr3, pstr2);

	cout << pstr3 << endl;

	delete [] pstr3;

	char pstr4[] = "hello,world";
	char * pstr5 = new char[strlen("world") + 1];
	char * p = strstr(pstr4, "world");
	strcpy(pstr5, p);

	cout << pstr5 << endl;
	return 0;
}

int main(void)
{
	test0();
	//test1();
}

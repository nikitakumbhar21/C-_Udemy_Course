//============================================================================
// Name        : S24_FunctionOverloading_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

double add(double a, double b)
{
	return a + b;
}


std::string add(std::string& a, std::string& b)
{
	return a + b;
}

const char* add(char* a, const char* b)
{
	std::string result = a;
	result += b;
	return result.c_str();
}

int main()
{
	double x = 1.5, y = 2.5;
	cout << "The sum of " << x << " and " << y << " is " << add(x, y) << endl;

	std::string s1 = "Hello, ";
	std::string s2 = "world! " ;
	cout << "The concatenation of \"" << s1 << "\" and \"" << s2 << "\" is \"" << add(s1, s2) << "\"" << endl;

	char cstr1[] = "Hello, ";
	const char* cstr2 = "world!";
	std::string str1{static_cast<string>(cstr1)};
	std::string str2{static_cast<string>(cstr2)};

	//const char* result = add(cstr1, cstr2);
	cout << "The concatenation of \"" << str1 << "\" and \"" << str2 << "\" is \"" << add(str1, str2) << "\"" << endl;

	return 0;
}

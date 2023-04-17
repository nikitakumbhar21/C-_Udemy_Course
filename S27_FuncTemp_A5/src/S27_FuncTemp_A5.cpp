//============================================================================
// Name        : S27_FuncTemp_A5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :Write a function templates that takes two parameters of numerical
//				fundamental type in C++ (think, int, double , long int,...) ,
//				turns each argument into a string and returns a concatenated string of the two.
//				The function should explicitly return std::string.
//============================================================================

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


template<typename T1, typename T2>
std::string concatenate(T1 a, T2 b)
{
	 return (std::to_string(a) + std::to_string(b));
}

int main()
{
	std::string message = concatenate(11, 22ul);
	std::cout << "Result: " << message << std::endl; // prints "result: 1122"

	std::string message2 = concatenate(11ul, 22);
	std::cout << "Result: " << message2 << std::endl; // prints "result: 1122"

	return 0;
}

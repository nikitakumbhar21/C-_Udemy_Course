//============================================================================
// Name        : S26_FuncMisfits_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :  write code for a function that tracks how many times it's been called. Suppose the function is called func .
//============================================================================

#include <iostream>

void func()
{
	static int count = 0;
	++count;
	for (int i = 1; i <= count; ++i)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

int main()
{
	func(); // prints "1 "
	func(); // prints "1 2 "
	func(); // prints "1 2 3 "
	func(); // prints "1 2 3 4 "
	return 0;
}

//============================================================================
// Name        : S26_FuncMisfits_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :write a factorial function with the signature below
//				unsigned int factorial(unsigned int n)
//============================================================================

#include <iostream>

unsigned int factorial(unsigned int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1); // recursive call
	}
}

int main()
{
	int n;
	std::cout << "Enter number";
	std::cin >> n;
	std::cout << "The factorial of "<< n << " is: " << factorial(n) << std::endl;
	std::cout << "The factorial of " << n <<" is: " << factorial(n) << std::endl;
	return 0;
}

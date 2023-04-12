//============================================================================
// Name        : S26_FunMisfits_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a function with the signature int odd() which is going to
//				return an odd number starting from 1. Each time it's called again
//				it's going to return the next odd number. So if you call it three times
//				it should respectively return 1 3 and 5.  You will then write another function
//				that uses odd() to print a given number of odd numbers
//				void print_odds(unsigned int count)
//				If we call print_odds(5) , it should print 1 3 5 7 9 ; if we call print_odd(10) ,
//				it should print 1 3 5 7 9 11 13 15 17 19 . Please note that there is a single space after the last odd number printed.
//============================================================================

#include <iostream>

int odd()
{
	static int n = 1;// keeps track of the last odd number returned
	int result = n; // save the last odd number returned as the result
	n += 2; // increment the counter by 2 to get the next odd number
	return result;// return the saved odd number as the result
}

void print_odds(unsigned int count)
{
	for (unsigned int i = 0; i < count; i++)
	{
		std::cout << odd() << " ";
	}
	std::cout << std::endl;
}

int main()
{
	print_odds(5);
	print_odds(10);
	return 0;
}

//============================================================================
// Name        : S40_inhertiance_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : DEfault Constructor with inheritance
//============================================================================

#include <iostream>
class One
{
	public :
	One()
	{
		std::cout << "1";
	}
};

class Two : public One
{
	public :
	Two()
	{
		std::cout << "2";
	}
};

class Three : public Two
{
	public :
	Three()
	{
		std::cout << "3";
	}
};

inline void do_stuff()
{
    Three t;
}
int main()
{
	Three t;
	return 0;
}

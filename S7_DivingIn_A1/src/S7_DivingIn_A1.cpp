//============================================================================
// Name        : S7_DivingIn_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a C++ program to ask some information from the user and
//				print that back packaged into a nice message
//============================================================================

#include<iostream>

int main()

{

	std::cout << " Where do you live?" << std::endl;

	std::string country;

	std::cin >> country;

	std::cout << "I've heard great things about " << country << ". I'd like to go sometime" << std::endl;

	return 0;

}

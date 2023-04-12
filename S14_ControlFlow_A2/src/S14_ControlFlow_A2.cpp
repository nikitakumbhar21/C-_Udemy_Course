//============================================================================
// Name        : S14_ControlFlow_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a program that prompts the user to type in a integral
//				value and checks whether the value is even or odd
//============================================================================

#include <iostream>

int main()
{
  int number;
  std::cout << "Please type in an integer value: ";
  std::cin >> number;

  if (number % 2 == 0)
  {
    std::cout << number << " is even." << std::endl;
  }
  else
  {
    std::cout << number << " is odd." << std::endl;
  }

  return 0;
}

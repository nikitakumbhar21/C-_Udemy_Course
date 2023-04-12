//============================================================================
// Name        : S14_ControlFlow_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : There's a medical treatment that is only applicable if your age
//				is between 21 and 39 inclusive .
//				Your task as a C++ developer is to write a program that checks
//				whether the user is eligible for the treatment.
//============================================================================

#include <iostream>

int main()
{
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  if (age >= 21 && age <= 39)
  {
    std::cout << "You are eligible for the medical treatment." << std::endl;
  }
  else
  {
    std::cout << "Sorry, You are too young for the medical treatment." << std::endl;
  }
  return 0;
}

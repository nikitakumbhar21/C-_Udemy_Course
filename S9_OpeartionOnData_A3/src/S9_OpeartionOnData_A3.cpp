//============================================================================
// Name        : S9_OpeartionOnData_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a C++ program to compute the base area and volume for a box.
//============================================================================

#include <iostream>

int main()

{

 double length;

 double width;

 double height;

 std::cout << "Welcome to box.. Please type in length, width and height information : " << std::endl;

 std::cout << "length : ";

 std::cin >> length;

 std::cout << "width : ";

 std::cin >> width;

 std::cout << "height : ";

 std::cin >> height;

 double base_area = length * width;

 double volume = base_area * height;

 std::cout << "The base area is : " << base_area << std::endl;

 std::cout << "The volume is : " << volume << std::endl;

 return 0;

}

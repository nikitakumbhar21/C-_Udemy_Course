//============================================================================
// Name        : S36_multiFiles_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Compiling and linking : Compilation model
//============================================================================

#include <iostream>



//Implementations

double add( double a, double b){
	return a + b;
}
double multiply(double a, double b){
	return a * b;
}

int main()
{
	double result = add(10.5,20.8);
	std::cout << "result : " << result << std::endl;
	return 0;
}

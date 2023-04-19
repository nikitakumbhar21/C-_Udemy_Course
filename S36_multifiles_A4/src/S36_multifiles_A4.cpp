//============================================================================
// Name        : S36_multifiles_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Inline Variables And Functions
//============================================================================

#include <iostream>

inline int age{12};
inline double threashold {11.1}; // Definition


//Defintion
 inline double add(double a, double b){
	if( (a > 11.1) && (b > 11.1)){
		return a + b;
	}else{
		return threashold;
	}
}

 inline void some_function()
 {
	std::cout << "age : " << age << std::endl;
	std::cout << "&age : " << &age << std::endl;
 }

void print_age_utility1()
{
    std::cout << "Printing from utility1 : " << std::endl;
    some_function();
    std::cout << std::endl;
}

void print_age_utility1();
//void print_age_utility2();

int main(){

   print_age_utility1();
   //print_age_utility2();

    return 0;
}

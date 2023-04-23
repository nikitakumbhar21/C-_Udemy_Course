//============================================================================
// Name        : S46_FuncEntity_A5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <functional>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE


inline void modify ( double data[]  , std::function<double(double)> modifier , unsigned int size){
	for(unsigned int i{}; i < size; ++i){
		data[i]  = modifier(data[i]);
	}
}

struct Multiply_by_2{
	double operator() (double value) const{
		return value *2;
	}
};

inline double add_1(double value){
	return value+1;
}

int main()
{
	  double scores[] {11.2, 22.1,33.4,44.3};
	    //Functor
	    Multiply_by_2 multiply_by_2;
	    modify(scores,multiply_by_2,4);

	    std::cout << "data [ ";
	    for( unsigned int i{}; i < 4; ++i){
	      std::cout << scores[i] << " ";
	    }
	   std::cout << "]";
	return 0;
}

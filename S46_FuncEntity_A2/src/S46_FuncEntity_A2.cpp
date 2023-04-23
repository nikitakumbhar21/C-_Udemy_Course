//============================================================================
// Name        : S46_FuncEntity_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Modifying scores
//				Your job is to write a modify function and a bunch of its callback functions
//============================================================================

#include <iostream>

inline void modify ( double data[]  , double (*modifier)(double value) , unsigned int size)
{
	for(unsigned int i{}; i < size; ++i)
	{
		data[i]  = modifier(data[i]);
	}
}

inline double multiply_by_2(double value)
{
	return value*2;
}

inline double add_1(double value)
{
	return value+1;
}
int main()
{
	double scores[] {10.1,20.3,30.2,40.3};
	    modify(scores,add_1,4); // calling the modify function with add_1 as the callback

	    std::cout << "data [";
	    for(unsigned int i{}; i < std::size_t(scores); ++ i){
	        std::cout << scores[i] << " ";
	    }
	    std::cout << "]" << std::endl;
	return 0;
}

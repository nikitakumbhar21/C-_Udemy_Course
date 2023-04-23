//============================================================================
// Name        : S46_FuncEntity_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Collection Sums
//				Your job is to set up a function pointer variable named f_ptr,
//				and pointing to the sum function,
//============================================================================

#include <iostream>

inline double sum (const double data[]  , unsigned int size)
{
	double sum{};
	for(unsigned int i{}; i < size; ++i)
	{
		sum += data[i];
	}
	return sum;
}

//THE static KEYWORD HERE IS TO MARK THE f_ptr VARIABLE FOR INTERNAL LINKAGE.
static double (*f_ptr)(const double data[], unsigned int size) = sum;


int main()
{
	double scores[] {10.1,20.3,30.2,40.3};
	    auto result = f_ptr(scores,4);
	    std::cout << "sum : " << result << std::endl;
	return 0;
}

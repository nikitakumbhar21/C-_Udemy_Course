//============================================================================
// Name        : S46_FuncEntity_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Functor score modifiers
//				Your job is to set up two separate functors,
//				one named Multiply_by_2 and the other named Add_1.
//				You can see where we're going right? Once you have those set up,
//				you'll set up a modify function whose actual modification it does
//				is defined by the functor object you pass as the parameter.
//============================================================================

#include <iostream>

template <typename Modifier>
void modify ( double data[]  , Modifier modifier , unsigned int size)
{
	for(unsigned int i{}; i < size; ++i)
	{
		data[i]  = modifier(data[i]);
	}
}

struct Multiply_by_2
{
	double operator() (double value) const
	{
		return value *2;
	}
};
struct Add_1
{
	double operator()(double value)const
	{
		return value + 1;
	}
};

int main()
{
	double scores[] {10.1,20.3,30.2,40.3};

	    Multiply_by_2 multiply_by_2;
	    Add_1 add1;

	    modify(scores,multiply_by_2,4);
	    modify(scores,add1,4);

	    std::cout << "data [";
	    for(unsigned int i{}; i < std::size_t(scores); ++ i){
	        std::cout << scores[i] << " ";
	    }
	    std::cout << "]" << std::endl;
	return 0;
}

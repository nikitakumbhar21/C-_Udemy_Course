//============================================================================
// Name        : S23_OutofFunctions_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstddef>
#include <float.h>

using namespace std;

const double* find_max_address(const double scores[], size_t count)
{
	size_t max_index{};
	double max = -DBL_MAX;
	for (size_t i{0}; i < count ; ++i)
	{
		if (scores[i] > max)
		{
			max = scores[i];
			max_index = i;
		}
	}
	return &scores[max_index];
}

int main()
{
	double array[] = {-3.0, -2.0, -5.0};
	const double* max_address = find_max_address(array, 3);
	std::cout << "The maximum value in the array is: " << *max_address << std::endl;
	return 0;
}

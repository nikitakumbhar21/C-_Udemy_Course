//============================================================================
// Name        : S27_FuncTemp_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to write a template specialization for our hunt_down
//				function template, that works on const char* .
//				It should use the strcmp facility from the <cstring> library to properly compare C-Strings.
//============================================================================

#include <iostream>
#include <cstring>

template<typename T>
int hunt_down(T value, T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++)
	{
		if (collection[i] == value)
		{
			return i; // Found it; return the index.
		}
	}
	return -1;
}

template<>
int hunt_down<const char*>(const char* value, const char** collection, unsigned int size) {
	for (unsigned int i{ 0 }; i < size; i++) {
		if (strcmp(collection[i], value) == 0) {
			return i; // Found it; return the index.
		}
	}
	return -1;
}

int main()
{
	std::string student_to_find{ "Kumar" };
	const char* students[]{ "Mary", "Steve", "Kumar", "Ahmed" };
	int index{ hunt_down(student_to_find.c_str(), students, 4) };
	std::cout << "Index: " << index << std::endl; // output: 2

	return 0;
}

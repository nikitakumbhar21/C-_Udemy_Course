//============================================================================
// Name        : S27_FuncTemp_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to set up an overload the hunt_down function template
//				with a non-template regular function that compares const char * properly.
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;

template <typename T>
int hunt_down(const T& value, const T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (collection[i] == value) {
			return i; // Found it; return the index.
		}
	}
	return -1;
}

//Definition

int hunt_down(const char* value, const char** arr, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (strcmp(arr[i], value) == 0) {
			return i; // Found it; return the index.
		}
	}
	return -1;
}

int main()
{
	const char* student_to_find{ "Kumar" };
	const char* students[]{ "Mary", "Steve", "Kumar", "Ahmed" };
	int index{ hunt_down(student_to_find, students, 4) };

	cout << "Index of comparing string(using const char* func-temp overload) : " << index << endl;
	return 0;

}

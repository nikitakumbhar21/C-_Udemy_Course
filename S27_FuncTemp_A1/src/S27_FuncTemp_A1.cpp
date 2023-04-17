//============================================================================
// Name        : S27_FuncTemp_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :Write a function template that finds stuff in a collection.
//				The function should be able to work regardless of the type
//				that you store in the collection. The function should take three parameters :
//				the collection as an array, the value to look for and the size of the array.
//============================================================================

#include <iostream>
#include <string>
using namespace std;

template <typename T>
int hunt_down(const T& value, const T* collection, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (collection[i] == value)
        {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main()
{
	const std::string students1[] {"Steve","Karly","Sally","Salim"} ;
	std::string to_find1{"Steve"};
	//hunt_down(to_find,students,4); // returns 0
	cout << "Index of 'Steve' in numbers: " << hunt_down(to_find1,students1,4) << endl; // prints 2

	const std::string students2[] {"Steve","Karly","Sally","Salim"} ;
	std::string to_find2{"Bart"};
	//hunt_down(to_find,students,4); // returns -1
	cout << "Index of 'Bart' in numbers: " << hunt_down(to_find2,students2,4) << endl;

	const unsigned int ids[] {1122,4432,7828,9022,3903,3015,2072};
	unsigned int id_to_find {2222} ;
	//hunt_down(id_to_find,ids,7); // returns -1
	cout << "Index of '2222' in numbers: " << hunt_down(id_to_find,ids,7)  << endl;

	return 0;
}


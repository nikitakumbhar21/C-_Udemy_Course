//============================================================================
// Name        : S19_Concatenate_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :Your job is to concatenate the data, stitch a single space
//				character in between and store the result in an std::string.
//============================================================================

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	const char input1[] {"Hello there!"};
	const char input2[] {"How are you?"};

	string result = string(input1) + " " + string(input2);

	cout << result << endl;
	return 0;
}

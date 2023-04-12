//============================================================================
// Name        : S17_Pointer_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You are given an array of integers and your job is to figure
//				out the address where the maximum element in the array lives.
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int data[]= {12,66,23,1,66};
	int n = sizeof(data) / sizeof(data[0]);
	int * max_address = &data[0];

	  for(int i=1 ; i < n ; ++i)
	  {
	    if( data[i] > *max_address)
	    {
	      max_address = &data[i];
	    }
	  }
	  cout << "The maximum element in the array is " << *max_address
	  << " at address " << max_address << endl;

	  return 0;
}

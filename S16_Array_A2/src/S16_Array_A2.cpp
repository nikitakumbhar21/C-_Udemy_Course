//============================================================================
// Name        : S16_Array_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to take in an array of integers and figure out if
//				it is sorted in incremental order or not.
//============================================================================

#include <iostream>
using namespace std;

bool is_collection_sorted(int numbers[], int size)
{
 bool sorted{true}; // Assume the collection is sorted from the start

  for(int i =1; i < size;++i)
  {
    if(i == 0)
    {
      continue;
    }
    //If we spot an element not greater than its predecessor,
    // we immediately flag the collection as not sorted.
    if(!(numbers[i] > numbers[i-1]))
    {
      sorted = false;
      break;
    }
  }
  return sorted;
}

int main()
{
	//int numbers[] = {10, 2, 3, 4, 5};
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;

	int numbers[size];

	cout << "Enter numbers of array: ";
	for(int i=0; i<size;i++){
		cin>>numbers[i];
	}

	//int arrSize = sizeof(numbers)/sizeof(numbers[0]);
	    if (is_collection_sorted(numbers,size)) {
	        std::cout << "The array is sorted in incremental order." << std::endl;
	    } else {
	        std::cout << "The array is not sorted in incremental order." << std::endl;
	    }

	    return 0;
}

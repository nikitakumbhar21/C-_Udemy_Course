//============================================================================
// Name        : S23_OutofFunction_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to write a function that checks whether the sum of
//				all elements in an array is even. If the sum is even you would store a true in a
//				bool input parameter called result. If the sum is odd, you would store in a false.
//				The function signature will be exactly as shown below
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	    int i,data[i],size;
	    cout << "Enter size of array";
	    cin >> size;
	    cout << "Enter numbers of array: ";
	    cin >> data[i];

	    bool result;

	    void is_sum_even(int data[], unsigned int size, bool& result);

	    if (result)
	    	    	    {
	    	    	    	cout << "The sum of the elements is in the array is even." << endl;
	    	    	    }
	    	    	    else
	    	    	    {
	    	    	    	cout << "The sum of the elements is in the array is odd." << endl;
	    	    	    }
	    return 0;
}
void is_sum_even(int data[], unsigned int size, bool& result)
{

		int sum = 0;
	    for (unsigned int i = 0; i < size; ++i)
	    {
	        sum += data[i];
	    }
	    result = (sum % 2 == 0);

}



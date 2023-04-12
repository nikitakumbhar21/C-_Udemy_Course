//============================================================================
// Name        : S16_Array_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Eliminating duplicates number form an array
//============================================================================

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int data[] = {1,2,4,5,1,8,2,3,6,1,4,2};
    int collection_size = sizeof(data)/sizeof(data[0]); // size of the array

    unordered_set<int> uniqueSet; // to store unique elements
    for(int i = 0; i < collection_size; i++) {
        uniqueSet.insert(data[i]);
    }

    int uniqueCount = uniqueSet.size(); // count of unique elements
    cout << "The collection contains " << uniqueCount << " unique numbers, they are : ";

    /* The loop uses the auto keyword to automatically deduce the type of the elements
     * in the set, and the const& qualifier to ensure that the loop variable i is a const
     * reference to each element in the set, preventing any modifications to the original
     * set elements.
     */
    for (auto const& i : uniqueSet)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


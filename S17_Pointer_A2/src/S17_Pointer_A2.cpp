//============================================================================
// Name        : S17_Pointer_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :You are given two arrays of int . Your job is to merge them into a new larger array.
//				For example if your two input arrays are
// 				int data1[] {1,2,3,4,5,66,77}; and   int data2[] {10,20,30,40,50,60};
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int data1[] = {1,2,3,4,5,66,77};
    int data2[] = {10,20,30,40,50,60};
    int size1 = sizeof(data1) / sizeof(data1[0]);
    int size2 = sizeof(data2) / sizeof(data2[0]);
    int size = size1 + size2;
    int merged[size];

    for (int i = 0; i < size1; i++) {
        merged[i] = data1[i];
    }
    for (int i = size1; i < size; i++) {
        merged[i] = data2[i - size1];
    }

    cout << "Merged array: ";
    for (int i = 0; i < size; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

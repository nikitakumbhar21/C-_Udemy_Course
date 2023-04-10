#include <iostream>
#ifndef EXERCISE_H
#define EXERCISE_H

void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2);

#endif
void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2){

int * new_array = new int [size1 + size2]; // Allocate the larger array dynamically : RECOMMENDED!

    for(unsigned int i{}; i < (size1 + size2); ++i){

      if(i < size1){
        new_array[i] = data1[i];
      }else{
        new_array[i] = data2[i-size1];
      }

    }

    //Print the new array
    for(unsigned int i{}; i < (size1 + size2); ++i){
      std::cout << new_array[i] << " ";
    }

    delete[] new_array;
}

//============================================================================
// Name        : S27_FuncTemp_A6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :To write a function template to find a given value in a collection.
//				The special thing about your function at this point will be that the
//				size of the collection (modeled as an array) will be passed as a non
//				type template parameter to the function. Your function will be named find_value().
//============================================================================

#include <iostream>
#include <cstddef> // for std::size_t

using namespace std;

template <std::size_t N, typename T>
int find_value(const T (&arr)[N], const T& val) {
    for (std::size_t i = 0; i < N; ++i) {
        if (arr[i] == val) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    unsigned int ids[] {222333,44556,123555,917666};
    auto index =  find_value<4,unsigned int>(ids,4455622);
    std::cout << "index : " << index << std::endl; // index : -1

    index =  find_value<4,unsigned int>(ids,44556);
    std::cout << "index : " << index << std::endl; // index : 1
    return 0;
}


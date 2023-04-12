//============================================================================
// Name        : S20_Function_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Maximum sub-sequence sum problem - Challenging.
//============================================================================

#include <iostream>

int max_subsequence_sum(int sequence[], unsigned int size) {
    int max_so_far = sequence[0];
    int max_ending_here = sequence[0];

    for (unsigned int i = 1; i < size; i++) {
        max_ending_here = std::max(sequence[i], max_ending_here + sequence[i]);
        max_so_far = std::max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main() {
    int data[] {3,-4 ,6,1,1,-2,2,3};
    auto result = max_subsequence_sum(data, 8);
    std::cout << "result : " << result << std::endl;

    return 0;
}


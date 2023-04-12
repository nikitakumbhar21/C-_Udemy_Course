//============================================================================
// Name        : S20_Functions_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write a function that checks whether a given positive number is a palindrome.
//============================================================================
#include<iostream>

using namespace std;

bool is_palindrome(int number)
{
    int original_number = number;
    int reversed_number = 0;

    // Reverse the digits of the number
    while (number > 0)
    {
        reversed_number = reversed_number * 10 + (number % 10);
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    return (original_number == reversed_number);
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (is_palindrome(number))
    {
        std::cout << number << " is a palindrome" << std::endl;
    }
    else
    {
        std::cout << number << " is not a palindrome" << std::endl;
    }
    return 0;
}

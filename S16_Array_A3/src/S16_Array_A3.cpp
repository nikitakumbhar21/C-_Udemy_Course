//============================================================================
// Name        : S16_Array_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Write a calculator app that prompts for the user for the result
//				 of an operation. It'll tell the user if they got it right or
//				 if the messed up big time!
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr)); // Seed the random number generator with the current time
    bool end{ false };
    while(!end)
    {
    // Generate two random numbers between 1 and 10
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;

    // Generate a random operator (+, -, or *)
    char oper = "+-*"[rand() % 3];

    // Calculate the correct answer
    int answer;
    if (oper == '+')
    {
        answer = num1 + num2;
    }
    else if (oper == '-')
    {
        answer = num1 - num2;
    }
    else
    {
        answer = num1 * num2;
    }

    // Ask the user for their answer
    int userAnswer;
    cout << "What is " << num1 << " " << oper << " " << num2 << "? ";
    cin >> userAnswer;

    // Check if the user's answer is correct
    if (userAnswer == answer)
    {
        cout << "Congratulations, you got it right!" << endl;
    }
    else
    {
        cout << "Sorry, that's incorrect. The correct answer is " << answer << "." << endl;
    }


    std::cout << std::endl;
    std::cout << "Do you want me to try again ? (Y | N) : ";

    char go_on;
    cin >> go_on;

    end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

   }
    cout << "See you later!" << std::endl;
    return 0;
}

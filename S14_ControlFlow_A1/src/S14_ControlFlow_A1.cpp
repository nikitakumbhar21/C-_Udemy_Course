//============================================================================
// Name        : S14_ControlFlow_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :  write code to check if a given year is leap or not.
//============================================================================
#include <iostream>
using namespace std;

int main()
{
   int year;
   bool isLeapYear = false;

   cout << "Enter a year: ";
   cin >> year;

          if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
          {
        	  isLeapYear = true;
          }
          else
          {
        	  isLeapYear = false;
          }

   if (isLeapYear)
      cout << year << " is a leap year." << endl;
   else
      cout << year << " is not a leap year." << endl;

   return 0;
}

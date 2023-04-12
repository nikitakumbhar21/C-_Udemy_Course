//============================================================================
// Name        : S9_OpeartionOnData_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to compute the area of a hexagon whose side length is 6.7
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double sideLength = 6.7; // length of a side of the hexagon
   double area; // variable to store the area of the hexagon

   area = 3 * sqrt(3) * pow(sideLength, 2) / 2; // formula to calculate the area

   cout << "The area of the hexagon is: " << area << " square inches." << endl;

   return 0;
}

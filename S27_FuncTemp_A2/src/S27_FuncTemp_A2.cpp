//============================================================================
// Name        : S27_FuncTemp_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Write a swap function that can swap any type with an = operator.
//				This is going to be much more powerful than the functions we did before
//				that relied on implicit conversions. That's right! Your function will be
//				able to swap int's with as much ease as it does for std::string's or any
//				other type in C++ with an assignment operator.
/*
To have some context, if we throw the next two std::string's to your function

    std::string x{"Hello"};
    std::string y{"There"};
    swap_data(x,y);
we would expect x to contain "There" and for y to contain "Hello" after the call to     swap_data(x,y);

If we change x and y to be int's

    int x{10};
    int y{20};
    swap_data(x,y);
we would x to contain 20 and y to contain 10.
*/

//============================================================================

#include <iostream>
#include <string>
using namespace std;

template <class T>
void swap_data(T& x, T& y)
{
	    T temp;
	    temp = x;
	    x = y;
	    y = temp;
}

int main()
{
	std::string a{"Hello"};
	std::string b{"There"};
	cout << "Before Swap Data: a = " << a <<", b = " << b << endl;

	swap_data(a, b);

	cout << "After Swap Data: a = " << a <<", b = " << b << endl;
	// x now contains "There", y now contains "Hello"

	int c{10};
	int d{20};
	cout << "Before Swap Data: c = " << c <<", d = " << d << endl;

	swap_data(c, d);

	cout << "After Swap Data: c = " << c <<", d = " << d << endl;
	// x now contains 20, y now contains 10
	return 0;
}

//============================================================================
// Name        : S21_Enum_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to write an enum class to represent days of the week in your C++ program.
//				The supported days are respectively Monday,Tuesday, Wednesday, Thursday,Friday,Saturday and Sunday
//============================================================================

#include <iostream>
using namespace std;

enum class DayOfWeek {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
	DayOfWeek day = DayOfWeek::Monday;
	void print_day(DayOfWeek day);
	return 0;
}

void print_day(DayOfWeek day)
{
	    switch(day)
	    {
	        case DayOfWeek::Monday :
	           cout << "Today is Monday" << endl;
	        break;

	        case DayOfWeek::Tuesday :
	            cout << "Today is Tuesday" << endl;
	        break;

	        case DayOfWeek::Wednesday :
	            cout << "Today is Wednesday" << endl;
	        break;

	        case DayOfWeek::Thursday :
	            cout << "Today is Thursday" << endl;
	        break;

	        case DayOfWeek::Friday :
	           cout << "Today is Friday" << endl;
	        break;

	        case DayOfWeek::Saturday :
	            cout << "Today is Saturday" << endl;
	            break;

	        case DayOfWeek::Sunday :
	            cout << "Today is Sunday" << endl;
	        break;

	        default :
	       cout << "No day" << endl;
	    }
}

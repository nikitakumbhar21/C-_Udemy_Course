//============================================================================
// Name        : S31_Classes_Objects_cost_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Fixing up your Point
//				We could run code like
/*    const Point p1(21.2,4.2);
    print_point(p1);
You will be making sure the Point class works well with const objects using the
techniques learnt so far. You'll also be fixing issues that arise as a result of
implementing methods on the outside of the class definition.*/

//============================================================================

#include <iostream>
using namespace std;

struct Point{
	public :
	//methods
	Point() = default;
	Point(double x, double y)
	{
		m_x = x;
		m_y = y;
	}

	void set_x(double x)
	{
		m_x = x;
	}

	void set_y(double y)
	{
		m_y = y;
	}

	double x() const ;
	double y() const ;
	//member variables
	private :
	double m_x{1};
	double m_y{1};
};

double Point::x() const
{
	return m_x;
}
double Point::y() const
{
	return m_y;
}

void print_point(const   Point& p)
{
std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
}

int main() {
	const Point p1(21.2,4.2);
	    print_point(p1);
	return 0;
}

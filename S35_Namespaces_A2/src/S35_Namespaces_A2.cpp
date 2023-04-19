//============================================================================
// Name        : S35_Namespaces_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Split your points across
/*	Your job is to organize the code in exercise.h and exercise.cpp in such
 	 a way that we can set up code like below

    Geom::Point p1(10.1,100.1);
    Utilities::print_point(p1);
and get

Point[x : 10.1, y : 100.1]
as output. You're not allowed to move declarations or definitions from one file to another.
Just organize the code in necessary namespaces.*/

//============================================================================

#include <iostream>
#include <cmath>

namespace Geom
{
	class Point
	{
		public :
		//methods
		Point() = delete;
		Point(double x, double y);
		Point(const Point& p);
		void set_x(double x);
		void set_y(double y);
		double x() const ;
		double y() const ;

		//member variables
		private :
		double m_x{1};
		double m_y{1};
	};
}

namespace Utilities
{
	void print_point(Geom::Point& p);
}

namespace Utilities
{
	void print_point(Geom::Point& p)
	{
		std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
	}
}

namespace Geom
{
    Point::Point(double x, double y)
		: m_x(x), m_y(y){
	}

	Point::Point(const Point& p)
	 : m_x(p.x()), m_y(p.y())
	{
	}

	void Point::set_x(double x)
	{
		m_x = x;
	}

	void Point::set_y(double y)
	{
		m_y = y;
	}

	 double Point::x() const
	 {
		return m_x;
	}
	 double Point::y() const
	 {
		return m_y;
	}
}

int main()
{
	Geom::Point p1(10.1,100.1);
	Utilities::print_point(p1);
	return 0;
}

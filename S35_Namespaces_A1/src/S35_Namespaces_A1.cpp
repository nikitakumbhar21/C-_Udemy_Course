//============================================================================
// Name        : S35_Namespaces_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Use Points like a gentleman
/*Given the Point class in exercise.h , your job is  to organize the code in a bunch of namespaces in such a way that we can use code below

    Geom::Point p1(10.1,100.1);
    Utilities::print_point(p1);
and get
Point[x : 10.1, y : 100.1]
as output. */
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
		Point(double x, double y)
			: m_x(x), m_y(y){
		}

		Point(const Point& p)
		: m_x(p.x()), m_y(p.y())
		{
		}
		void set_x(double x)
		{
			m_x = x;
		}

		void set_y(double y)
		{
			m_y = y;
		}

	 	 double x() const
	 	 {
		 	 return m_x;
	 	 }
	 	 double y() const
		{
			return m_y;
		}
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

int main()
{
	 Geom::Point p1(10.1,100.1);
	 Utilities::print_point(p1);
	return 0;
}

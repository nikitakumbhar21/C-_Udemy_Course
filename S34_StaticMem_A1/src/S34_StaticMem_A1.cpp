//============================================================================
// Name        : S34_StaticMem_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Count'em Points
/*Add a non const static member variable named s_point count in such a way that
	we can run code like below

    Point p1(1,1);
    Point p2(p1); // Making a copy
    std::cout << "Point count : " << Point::s_point_count << std::endl;
and get

Point count : 2

as the output. In other words the static variable will keep track of how many point
instances we've created.*/

//============================================================================

#include <iostream>
#include <cmath>

class Point{
	//friend double distance(const Point& from, const Point& to);
	friend class ShapeFactory;
	public :
	//methods
	Point() = delete;
	Point(double x, double y)
		: m_x(x), m_y(y)
	{
            ++s_point_count;
	}

	Point(const Point& p)
	 : m_x(p.x()), m_y(p.y())
	{
		++s_point_count;
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
    static size_t s_point_count;
	//member variables
	private :

	double m_x{1};
	double m_y{1};
};

size_t Point::s_point_count {0};

int main()
{
	Point p1(1,1);
	Point p2(p1); // Making a copy
	std::cout << "Point count : " << Point::s_point_count << std::endl;
	return 0;
}

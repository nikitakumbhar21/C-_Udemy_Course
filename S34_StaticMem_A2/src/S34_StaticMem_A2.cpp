//============================================================================
// Name        : S34_StaticMem_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Count Points like a gentleman
//============================================================================

#include <iostream>
#include <cmath>

class Point
{
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
    inline static size_t s_point_count;
	//member variables
	private :

	double m_x{1};
	double m_y{1};
};

int main()
{
	 Point p1(1,1);
	 Point p2(p1); // Making a copy
	 std::cout << "Point count : " << Point::s_point_count << std::endl;
	return 0;
}

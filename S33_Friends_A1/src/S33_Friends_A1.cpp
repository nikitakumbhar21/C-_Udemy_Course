//============================================================================
// Name        : S33_Friends_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Measuring distances
/*Your job is to apply the necessary changes to the Point class in exercise.h to make code like below

    Point p1(1,1);
    Point p2(2,2);
    std::cout << "distance : " << distance(p2,p1) << std::endl;
compile and print

distance : 1.41421 */
//============================================================================

#include <iostream>
#include <cmath>

class Point
{
friend double distance(const Point& from, const Point& to);
	public :
	//methods
	Point() = delete;
	Point(double x, double y) : m_x(x), m_y(y) {}

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

double distance(const Point& from, const Point& to) // Friend Function
{
	return  std::sqrt(pow(to.m_x - from.m_x, 2) + pow(to.m_y - from.m_y, 2) * 1.0);
}
int main() {
	Point p1(1,1);
	Point p2(2,2);
	std::cout << "distance : " << distance(p2,p1) << std::endl;
	return 0;
}

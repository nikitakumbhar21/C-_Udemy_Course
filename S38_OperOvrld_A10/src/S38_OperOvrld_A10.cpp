//============================================================================
// Name        : S38_OperOvrld_A10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Distance function object
/*Given the Point class in exercise.h, your job is to write a functor called Line, that we could use like below

    Line l(Point(1,1),Point(2,2));
    std::cout << "distance : " << l() << std::endl;
and get

distance : 1.41421

as output.  1.41421  being the distance between Point(1,1) and Point(2,2) .*/
//============================================================================

#include <iostream>
#include <cmath>

struct Point
{
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point()
	{
	}
	double m_x{};
	double m_y{};
};

class Line
{
	public :
	Line(const Point& start, const Point& end)
		: m_start(start),m_end(end){}

	double operator()() const
	{
		return std::sqrt(std::pow(m_end.m_x - m_start.m_x, 2) + std::pow(m_end.m_y - m_start.m_y, 2) * 1.0);
	}
	private :
		Point m_start;
		Point m_end;
};


int main()
{
	Line l(Point(1,1),Point(2,2));
	std::cout << "distance : " << l() << std::endl;
	return 0;
}

//============================================================================
// Name        : S37_SmartPointers_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You can do better!
/*Your job is to rewrite the Line class in such a way that we can use it with
smart pointers .Please be extremely careful about how you pass the
std::unique_ptr arguments to the Line constructor.*/
//============================================================================

#include <iostream>
#include <memory>

struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
	double m_x{};
	double m_y{};
};

class Line{
	public :
	Line(std::unique_ptr<Point> start, std::unique_ptr<Point> end)
		: m_start(std::move(start)), m_end(std::move(end))
		{};

	double start_x() const{
		return m_start->m_x;
	}
	double start_y() const{
		return m_start->m_y;
	}

	double end_x() const{
		return m_end->m_x;
	}
	double end_y() const{
		return m_end->m_y;
	}

	private :
	std::unique_ptr<Point> m_start{};
	std::unique_ptr<Point> m_end{};
};

int main()
{
	 /*	Point * p1 = new Point{1,1};
	    Point * p2 = new Point {2,2};
	    Line l1(p1,p2); // It's not clear who will clean up p1 from the perspective of the user of l1
	*/

		std::unique_ptr<Point> p1 = std::make_unique<Point>(1,1);
	    std::unique_ptr<Point> p2 = std::make_unique<Point>(2,2);
	    Line l1(std::move(p1),std::move(p2)); // Now it's clear that ownership of p1 has moved into l1. l1 now has the responsibility to clean up.
	    //std::cout << "Unique ptr p1 Line Constructor: " << l1 << std::endl;
	    //std::cout << "Unique ptr p1 Line Constructor: " << p2->m_y() << std::endl;
	    	return 0;
}

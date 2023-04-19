//============================================================================
// Name        : S37_SmartPointers_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Shared pointers!!
//				we want to go for a design where Line's don't own their Point members.
//				In other words, a Line object can die off without taking with it it's
//				Point member's memory, and those Points can still be used long after
//				the Line object has died. std::shared_ptr is a suitable pointer provided
//				by the standard library to help do that.
//============================================================================

#include <iostream>
#include <memory>

struct Point
{
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point(){
	}
	double m_x{};
	double m_y{};
};

class Line
{
	public :
	Line(std::shared_ptr<Point> start, std::shared_ptr<Point> end)
		: m_start(start), m_end(end)
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
	std::shared_ptr<Point> m_start{};
	std::shared_ptr<Point> m_end{};
};

int main()
{
	/*Point * p1 = new Point{1,1};
	    Point * p2 = new Point {2,2};
	    Line l1(p1,p2);*/

	 std::shared_ptr<Point> p1 = std::make_shared<Point>(1,1);
	    std::shared_ptr<Point> p2 = std::make_shared<Point>(2,2);
	    Line l1(p1,p2);
	return 0;
}

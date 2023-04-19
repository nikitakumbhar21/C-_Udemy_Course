//============================================================================
// Name        : S32_Dinto_ConInit_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Default Points
//============================================================================

#include <iostream>

class Point
{
public:
 Point(double x = 10.1, double y = 100.1) : x_(x), y_(y) {}

 Point(const Point& other) : x_(other.x_), y_(other.y_) {}

	double& x() { return x_; }
	double& y() { return y_; }

private:
	double x_;
	double y_;
};

int main()
{
	Point p1;
	std::cout << "x-value : " << p1.x() << std::endl;
	std::cout << "y-value : " << p1.y() << std::endl;

	Point p2(33.3);
	std::cout << "x-value : " << p2.x() << std::endl;
	std::cout << "y-value : " << p2.y() << std::endl;
	return 0;
}

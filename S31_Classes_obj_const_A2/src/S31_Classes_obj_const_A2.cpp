//============================================================================
// Name        : S31_Classes_obj_const_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Kill two birds with one stone
/* 	we can use it like below

     Point p1(21.2,4.2);
     p1.x() = 33.3;
     p1.y() = 44.4;
     print_point(p1);
and get

Point[x : 33.3, y : 44.4]

as the output.*/

//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Point {
public:
	Point(double x = 0.0, double y = 0.0): x_(x), y_(y) {}

	double& x() { return x_; }
	double& y() { return y_; }

private:
	double x_;
	double y_;
};

void print_point(Point p)
{
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" << std::endl;
}

int main()
{
	Point p1(21.2, 4.2);
	p1.x() = 33.3;
	p1.y() = 44.4;
	print_point(p1);
	return 0;
}

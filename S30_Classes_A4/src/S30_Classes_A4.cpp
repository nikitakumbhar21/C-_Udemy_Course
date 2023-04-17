//============================================================================
// Name        : S30_Classes_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Point printing like a gentleman!
/* Your job is to set up a bunch of getter methods in the Point class, in such a way that the function
	void print_point( Point& p);
declared in exercise.h and defined in exercise.cpp works as expected and prints
Point[x : 21.2, y : 4.2] */

//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

class Point{
	public :
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x;
		m_y = y;
	}
	double distance_to( Point target){
		return sqrt(pow(target.m_x - m_x, 2) + pow(target.m_y - m_y, 2) * 1.0);
	}
    double x(){
		return m_x;
	}
	double y(){
		return m_y;
	}
	//member variables
	private :
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p)
{
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
}

int main() {
	 Point p(21.2, 4.2);
	    print_point(p);
	    return 0;
}

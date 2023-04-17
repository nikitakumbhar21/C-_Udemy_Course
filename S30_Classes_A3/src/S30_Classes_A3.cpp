//============================================================================
// Name        : S30_Classes_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Construct'em Points!
/*You will set up a constructor for the Point class, After you do so, we should
 	 be able to create Point objects and use them like below

    Point p1(1.1,2.1);
    Point p2(3.2,5.2);
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;
The code should correctly compute the distance between the points and print
distance from p1 to p2 : 3.74433 */
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    double m_x;
    double m_y;

    Point(double x, double y)
        : m_x(x), m_y(y) {}

    double distance_to(const Point& other) const {
        double dx = m_x - other.m_x;
        double dy = m_y - other.m_y;
        return std::sqrt(dx * dx + dy * dy);
    }
};

int main() {
    Point p1(1.1, 2.1);
    Point p2(3.2, 5.2);
    std::cout << "Distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;
    return 0;
}

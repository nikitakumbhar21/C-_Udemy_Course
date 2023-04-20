//============================================================================
// Name        : S44_ClassTemp_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Multi dimensional points : The swiss army knife class
/*	In graphics, simulation, or game applications, it is common to need to represent multi-dimensional points. You may have class objects like

Point3D p1(9,39,4);

to represent points with three components; class objects like

Point2D p2(88.2,29.4);

One can even keep going and write dozens of classes to handle all these points
 with 2,3,4,5,... components. Hopefully you can see that these classes can be
 a nightmare to maintain as they do something very similar.*/
//============================================================================

#include <iostream>
template <typename T , unsigned int size>
class Point{
	T m_components[size];
public :
	T get_value(unsigned int index) const{
		return m_components[index];
	}
	void set_value(unsigned int index, T value){
		m_components[index] = value;
	}
	void print_info() const{
		std::cout << "point : [ ";
		for(unsigned int i{0}; i < size ; ++i){
			std::cout << m_components[i] << " " ;
 		}
		 std::cout << "]";
	}
};
int main() {
	Point<int,3> point_3d;
	    point_3d.set_value(0,10);
	    point_3d.set_value(1,20);
	    point_3d.set_value(2,30);
	    point_3d.print_info() ;
	return 0;
}

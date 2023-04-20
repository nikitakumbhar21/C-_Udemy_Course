//============================================================================
// Name        : S44_ClassTemp_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Default values for template parameters
//============================================================================

#include <iostream>

template <typename T , unsigned int size >
class Point
{
	T m_components[size];
public :
	T get_value(unsigned int index) const
	{
		return m_components[index];
	}
	void set_value(unsigned int index, T value)
	{
		m_components[index] = value;
	}
	void print_info() const{
		std::cout << "point : [ ";
		for(unsigned int i{0}; i < size ; ++i)
		{
			std::cout << m_components[i] << " " ;
 		}
		 std::cout << "]";
	}
	unsigned int get_size() const
	{
	    return size;
	}
};

int main()
{
	 Point<int, 2>  point_2d;
	    point_2d.set_value(0,10);
	    point_2d.set_value(1,20);
	    point_2d.print_info() ;

	    Point<double,3> point_3d;
	       point_3d.set_value(0,10.1);
	       point_3d.set_value(1,20.2);
	       point_3d.set_value(2,30.3);
	       point_3d.print_info() ;

	       Point<int, 2>  point_2d_2;
	       point_2d_2.set_value(0,10);
	       point_2d_2.set_value(1,20);
	       point_2d_2.print_info() ;
	return 0;
}

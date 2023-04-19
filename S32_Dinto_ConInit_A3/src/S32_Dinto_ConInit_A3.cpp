//============================================================================
// Name        : S32_Dinto_ConInit_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Delegated constructor for Box
//============================================================================

#include <iostream>

class Box
{
	public :
	//methods
	Box() = default;

	Box(double width, double length)
		: Box(width,length,1.0)
	{
	}

	Box(double width, double length, double height)
	 : m_width(width) , m_length(length), m_height(height)
	{

	 }
	double base_area() const
	{
		return m_width * m_length;
	}
	double volume() const
	{
		return base_area() * m_height;
	}

	//member variables
	private :
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

int main()
{
	 Box b1(3,3,10);
	    Box b2(3,3);
	    std::cout << "b1-volume : " << b1.volume() << std::endl;
	    std::cout << "b2-volume : " << b2.volume() << std::endl;

	return 0;
}

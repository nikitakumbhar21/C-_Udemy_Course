//============================================================================
// Name        : S32_DInto_ConInit_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Build Boxes like a gentleman!
//============================================================================

#include <iostream>

class Box
{
public:
	Box(double length, double width, double height) : length_(length), width_(width), height_(height) {}

	double volume() const
	{
	return length_ * width_ * height_;
	}

private:
	double length_;
	double width_;
	double height_;
};

int main()
{
	 Box b1(3, 3, 10);
	std::cout << "volume : " << b1.volume() << std::endl;

	return 0;
}

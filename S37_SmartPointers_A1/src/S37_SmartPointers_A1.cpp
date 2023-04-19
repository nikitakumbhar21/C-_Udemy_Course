//============================================================================
// Name        : S37_SmartPointers_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Release memory like a gentleman!
//				Your job is to use one of the smart pointers you know about to
//				create a pointer called p_box pointing to a Box object on the heap
//				in the unity_volume() function. The object will be a unity cube with
//				all members (width, length, height) equal to 1.
//============================================================================

#include <iostream>
#include <memory>

class Box
{
	public :
	//methods
	Box() = default;

	Box(double width, double length, double height)
	 : m_width(width) , m_length(length), m_height(height)
	{
	}
	~Box()
	{
		std::cout << "Cleaning up";
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

/*double  unity_volume ()
{
	auto p_box = std::make_unique<Box>();
	return p_box -> volume();
}
*/
double unity_volume()
{
    std::unique_ptr<Box> p_box(new Box(1.0, 1.0, 1.0)); // create a unique_ptr to a Box object on the heap
    // do some operations with p_box and the Box object it points to
    return p_box -> base_area();
    return p_box -> volume();
    // once p_box goes out of scope, the Box object it points to will be automatically deleted
}
int main()
{
	Box b;
	std::cout << "Base area : " << b.base_area() << std::endl;
	std::cout << "volume : " << b.volume() << std::endl;
	return 0;
}

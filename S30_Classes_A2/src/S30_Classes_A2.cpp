//============================================================================
// Name        : S30_Classes_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to set up a constructor in such a way that we can create Box objects like below
/*    Box box(10.1,20.4,30.3);
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;
The code should correctly compute the area and the volume and get them printed out like below
base area : 206.04
volume : 6243.01  */
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>

class Box {
public:
    double m_width;
    double m_length;
    double m_height;

    Box(double width, double length, double height)
        : m_width(width), m_length(length), m_height(height) {}

    double base_area() const
    {
        return m_width * m_length;
    }

    double volume() const
    {
        return m_width * m_length * m_height;
    }
};

int main()
{
    Box box(10.1, 20.4, 30.3);
    std::cout << "Base area of Box: " << box.base_area() << std::endl;
    std::cout << "Volume of Box: " << box.volume() << std::endl;
    return 0;
}

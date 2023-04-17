//============================================================================
// Name        : S30_Classes_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You're a box maker! You will be maxing boxes in this exercise.
//You will create a Box class in such a way that we can use it in our C++ code like below
/*    Box box;
    box.m_width = 10;
    box.m_length = 20;
    box.m_height = 30;
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;
in other words, the class will have three member variables

m_width
m_length
m_height

that should be of type double and  accessible from the outside, and two methods
base_area()
volume()
which should return respectively return the area and the volume of the box.
The data should be returned as double. */
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>

class Box {
public:
    double m_width;
    double m_length;
    double m_height;

    double base_area() const {
        return m_width * m_length;
    }

    double volume() const {
        return m_width * m_length * m_height;
    }
};

int main() {
    Box box;
    box.m_width = 10;
    box.m_length = 20;
    box.m_height = 30;
    std::cout << "Base Area of Box: " << box.base_area() << std::endl;
    std::cout << "Volume of Box : " << box.volume() << std::endl;
    return 0;
}

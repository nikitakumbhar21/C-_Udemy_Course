//============================================================================
// Name        : S30_Classes_A5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

/*
 class Box {

	public :
	//methods
	Box(double width, double length, double height);
	double base_area();
	double volume();

	//member variables
	private :
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

 Box::Box(double width, double length, double height)
{
	m_width = width;
	m_length = length;
	m_height = height;
}

double Box::base_area()
{
	return m_width * m_length;
}

double Box::volume()
{
	return base_area() * m_height;
}
*/
class Box
{
  private:
    double length;
    double width;
    double height;

  public:
    // Constructors
    Box()
    {
      length = 0;
      width = 0;
      height = 0;
    }

    Box(double l, double w, double h)
    {
      length = l;
      width = w;
      height = h;
    }

    // Accessor methods
    double getLength() const
    {
      return length;
    }

    double getWidth() const
    {
      return width;
    }

    double getHeight() const
    {
      return height;
    }

    // Mutator methods
    void setLength(double l)
    {
      length = l;
    }

    void setWidth(double w)
    {
      width = w;
    }

    void setHeight(double h)
    {
      height = h;
    }

    // Other methods
    double getVolume() const
    {
      return length * width * height;
    }

    double getSurfaceArea() const
    {
      return 2 * (length * width + length * height + width * height);
    }
};

int main()
{
  Box box1;
  Box box2(2, 3, 4);

  cout << "Box 1 volume: " << box1.getVolume() << endl;
  cout << "Box 2 volume: " << box2.getVolume() << endl;

  box1.setLength(5);
  box1.setWidth(6);
  box1.setHeight(7);

  cout << "Box 1 surface area: " << box1.getSurfaceArea() << endl;

  return 0;
}


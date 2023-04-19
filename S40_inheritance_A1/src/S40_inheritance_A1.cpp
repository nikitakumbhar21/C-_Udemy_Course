//============================================================================
// Name        : S40_inheritance_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You'll fix the hierarchy
/*Given the inheritance hierarchy , you will fix the code in such a way that we can use code like below

    B b;
    b.set_values(10,20,30);
    b.print();
and get

x : 10,y : 20,z : 30

as output.*/
//============================================================================

#include <iostream>

class A
{
	public :
	 int m_x;
};

class B : public A
{
	public :
		int m_y;
		void set_values(int x, int y, int z)
		{
			m_x = x;
			m_y = y;
			m_z = z;
		}
		void print() const
		{
			std::cout << "x : " << m_x << ",y : " << m_y
				<< ",z : " << m_z ;
		}
	private :
		int m_z;
};

int main()
{
	  B b;
	    b.set_values(10,20,30);
	    b.print();
	return 0;
}

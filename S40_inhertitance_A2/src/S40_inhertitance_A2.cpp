//============================================================================
// Name        : S40_inheritance_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Member access specifier
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
				<< ",z : " << m_z;
		}
	private :
		int m_z;
};

inline void apply_changes( B& b)
{
	b.m_x *=2;
}

int main()
{
	 	 B b;
	    b.set_values(10,20,30);
	    apply_changes(b);
	    b.print();
	    return 0;
}

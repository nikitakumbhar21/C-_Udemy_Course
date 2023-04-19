//============================================================================
// Name        : S41_polymorphism_A4.cpp(Inheritance and polymorphism with static members)
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Static members with inheritance
//============================================================================

#include <iostream>

class Base
{
	protected :
		int m_x{};

	public :
		Base(int x) : m_x(x){++m_count;}
		static  unsigned int m_count;

		virtual void print() const
		{
			std::cout << "data[ x : " << m_x
				<< "]";
		}
};

class Derived : public Base{
	private :
		int m_y {};
	public :
		Derived (int x, int y) : Base(x),m_y(y){++m_count;}
		static  unsigned int m_count;

		virtual void print() const override
		{
			std::cout << "data[ x: " << m_x
				<< " y:" << m_y
				<< "]";
		}
};

unsigned int Base::m_count{0};
unsigned int Derived::m_count{0};

int main()
{
	 Base b1(10);
	    Base b2(20);
	    std::cout << "base count : " << Base::m_count << std::endl;
	    Derived d1(30,40);
	    Derived d2(50,60);
	    std::cout << "base count : " << Base::m_count << std::endl;
	    std::cout << "derived count : " << Derived::m_count << std::endl;
	return 0;
}

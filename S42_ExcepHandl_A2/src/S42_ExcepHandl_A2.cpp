//============================================================================
// Name        : S42_ExcepHandl_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Throwing class objects
//============================================================================

#include <iostream>
#include <string>

class DividebyZeroException {
	public :
    DividebyZeroException(int num, int den)
        : m_num(num), m_den(den)
        {
        }

    const std::string what()const{
		std::string msg = std::string("Error : Trying to divide ")+ std::to_string(m_num)
			+ std::string(" by ") + std::to_string(m_den);
        return msg;
    }
private :
    int m_num;
	int m_den;
};

int divide(int a, int b)
{
	if(b == 0)
		throw DividebyZeroException(a,b);
	return a/b;
}

void trouble(int num)
{
	try
	{
		divide(num,0);
	}
	catch(const DividebyZeroException& ex)
	{
		std::cout << ex.what();
	}
}

int main()
{
	trouble(20);
	//divide(20, 0);
	return 0;
}

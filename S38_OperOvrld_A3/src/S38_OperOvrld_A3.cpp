//============================================================================
// Name        : S38_OperOvrld_A3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Multi-dimensional Points : Non member operator+
/*The CU::Point_nD class, is designed to model multi-dimensional point objects, we can use it to create 2D points like below

CU::Point_nD p{1.1,2.2};

3D points like below

CU::Point_nD p{1.1,2.2,3.3};

points in the 4D space like below

CU::Point_nD p{1.1,2.2,3.3,4.4};

you get the idea. We take advantage of std::initializer_list to forward the data to our internal dynamic array.

Your job is to write an operator+ for this class and make it work in such a way that we can run the code

    CU::Point_nD p1 {1.1,2.2,3.3};
    CU::Point_nD p2 {4.1,5.2,6.3};
    auto result = p1 + p2;
    result.print();
and get

Point [ 5.2 7.4 9.6 ]

as output. You will do it as a non member, free standing global function.*/
//============================================================================

#include <iostream>

namespace CU
{

	class Point_nD
	{
		public :
		Point_nD(std::initializer_list<double> list )
		{
				m_size= list.size();
				m_data = new double[m_size];
			 	for(unsigned int i{} ;  i < m_size; ++i)
			 	{
              		m_data[i] = *(list.begin() + i) ;
        		}

		}

		Point_nD(const Point_nD& source)
		{
			m_size = source.size();
			m_data = new double[m_size];
			for(unsigned int i{} ;  i < m_size; ++i){
              		m_data[i] = source.at(i) ;
        	}
		}

		~Point_nD()
		{
			delete[] m_data;
		}

		double at(unsigned int index) const
		{
			return m_data[index];
		}
		void set( unsigned int index, double value)
		{
			m_data[index] = value;
		}

		unsigned int size() const
		{
			return m_size;
		}

		void print() const
		{
			std::cout << "Point [ ";
			for(unsigned int i{} ;  i < m_size; ++i)
			{
               std::cout << m_data[i] << " ";
        	}
			std::cout << "]";
		}

		private :
		unsigned int m_size;
		double* m_data;
	};

	Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand);
}
namespace CU
{
    	Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand)
    	{
		Point_nD tmp(left_operand);
		for(unsigned int i{} ;  i < left_operand.size(); ++i)
		{
			tmp.set(i, tmp.at(i) + right_operand.at(i));
        }
		return tmp;
	}
}
int main()
{
	 CU::Point_nD p1 {1.1,2.2,3.3};
	 CU::Point_nD p2 {4.1,5.2,6.3};
	 auto result = p1 + p2;
	 result.print();
	 return 0;
}

//============================================================================
// Name        : S38_OperOvrld_A5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Read data like a genteleman
/* Give the multi-dimensional Point class in exercise.h, we have taken out the at() method

        double at(unsigned int index) const{
            return m_data[index];
        }
because we can now do better! We can set up a subscript operator to gives a
point component at a given index.

Your job is to set up a proper operator[] that replaces the at() method in
such a way that we can read components.

You will also replace every instance where the at() method was used with a use
for operator[] to make the code compile  and work as expected.*/
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
			for(unsigned int i{} ;  i < m_size; ++i)
			{
					  m_data[i] = source[i];
        	}
		}

		~Point_nD()
		{
			delete[] m_data;
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

		double operator[] (unsigned int index) const
		{
			return m_data[index];
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
    			tmp.set(i,tmp[i] +right_operand[i])	;
    		}
    		return tmp;
    	}
}

int main()
{
		CU::Point_nD p1 {1.1,2.2,3.3};
	    std::cout << "value [0] : " << p1[0] << std::endl;
	    std::cout << "value [1] : " << p1[1] << std::endl;
	    std::cout << "value [2] : " << p1[2] << std::endl;
	    return 0;
}

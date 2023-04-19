//============================================================================
// Name        : S38_OperOvrld_A5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You'll print Points!
/*Your job is to set up an operator<< for the Point_nD class given in exercise.h, in such a way that we can use it like below

    CU::Point_nD p1 {1.1,2.2,3.3};
    use_multi_d_point(p1);
and get

Point [ 1.1 2.2 3.3 ]

as output, with no white spaces before Point or after the last ].*/
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
              		//m_data[i] = source.at(i) ;
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

	inline Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand)
	{
		Point_nD tmp(left_operand);
		for(unsigned int i{} ;  i < left_operand.size(); ++i)
		{
			//tmp.set(i, tmp.at(i) + right_operand.at(i));
			tmp.set(i,tmp[i] +right_operand[i])	;
        }
		return tmp;
	}
	inline std::ostream& operator<<(std::ostream& os, const Point_nD& p)
	{
		os << "Point [ ";
		for(unsigned int i{} ;  i < p.size(); ++i)
		{
            os << p[i] << " ";
        }
		os << "]";
		return os;
	}
}

inline void use_multi_d_point( const CU::Point_nD& p)
{
	std::cout << p ;
}

int main()
{
	 CU::Point_nD p1 {1.1,2.2,3.3};
	 use_multi_d_point(p1);
	 return 0;
}

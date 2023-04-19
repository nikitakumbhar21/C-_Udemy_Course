//============================================================================
// Name        : S38_OperOvrld_A19.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CU::string copy assignment operator
/*	You will set up a copy assignment operator for the CU::string class . After that we'll be able to use it like below

    CU::string a ("dog");
    CU::string b ("cat");
    a = b;
and this will do deep copy. After the assignment a and b will contain the same string data, but the a::m_data and b::m_data pointers will contain different addresses.

You will put your code in the CU::string class definition.*/
//============================================================================

#include <iostream>
#include <cstring>

namespace CU
{
	class string
	{
		friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
		friend string operator+(const string& left, const string& right);
		friend string& operator+=(string& left, const string& right);
		public :
		string(const char* data, size_t size = 15 )
		{
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
		}

		//Copy constructor
		string(const string& source)
		{
			m_size = source.m_size;
			m_data = new char [m_size]; // We want to do deep copy here.
			std::strcpy(m_data,source.m_data);
		}

		//Copy assignment operator

		string& operator= (const string& right_operand)
		{
			std::cout << "Copy assignment operator called" << std::endl;
			if(this != & right_operand)
			{
				delete[] m_data;
				m_data = new char [right_operand.m_size];
				std::strcpy(m_data,right_operand.m_data);
			}
			return *this;
		}

	const char* c_str() const
	{
		return m_data;
	}

	~string()
	{
		delete [] m_data;
		m_data = nullptr;
	}
		private :
			unsigned int m_size;
			char * m_data{nullptr};
	};

	inline std::ostream& operator<< (std::ostream& out , const CU::string& s)
	{
		out << s.m_data;
		return out;
	}

	inline string operator+(const string& left, const string& right)
	{
		string tmp(left);
		tmp += right;
		return tmp;
	}

	inline string& operator+=(string& left, const string& right)
	{
		std::strcat(left.m_data,right.m_data);
		return left;
	}
}

int main()
{
	 CU::string a ("dog");
	 CU::string b ("cat");
	 a = b;
	 std::cout << "Output: " << a << std::endl;
	return 0;
}

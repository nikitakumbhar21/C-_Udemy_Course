//============================================================================
// Name        : S38_OperOvrld_A8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Use CU::strings left and right, like a gentleman.
//============================================================================

#include <iostream>
#include <cstring>


namespace CU
{
	class string
	{
		friend std::ostream& operator<< (std::ostream& out , const CU::string& s);

		//We pass operator+()'s first param by const reference.
		//Why ? Please check the lecture on implicity conversions with references in the chapter on Functions.
		friend string operator+(const string& left, const string& right);
		friend string& operator+=(string& left, const string& right);
		public :
		//We make the constructor non explicit to allow implicit conversions from const char* to CU::string
		string(const char* data, size_t size = 15 )
		{
			m_size = size;
			m_data = new char [m_size];
			std::strcpy(m_data,data );
		}
		string(const string& source)
		{
			m_size = source.m_size;
			m_data = new char [m_size]; // We want to do deep copy here.
			std::strcpy(m_data,source.m_data);
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

	//We pass operator+()'s first param by const reference.
	//Why ? Please check the lecture on implicity conversions with references in the chapter on Functions.
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
	CU::string last_name("John ");
	CU::string first_name{"Snow"};

	auto result1 = last_name + "Snow";
	std::cout << "result : " << result1 << std::endl;

	auto result2 = ( "John " + first_name);
	std::cout << "result : " << result2  << std::endl;
	return 0;
}

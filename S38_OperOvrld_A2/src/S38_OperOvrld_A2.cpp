//============================================================================
// Name        : S38_OperOvrld_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Adding up strings
/*Given the CU::string class, we want the ability to concatenate strings using operator+ just like below

    CU::string full_name("John ");
    CU::string first_name{"Snow"};
    auto result = full_name + first_name;
    std::cout << result << std::endl;
and get

John Snow

as output.

Your job is to implement the operator+ function to let us do that as a non member
 free standing global function.*/
//============================================================================

#include <iostream>
#include <cstring>

namespace CU
{
	class string
	{
		friend string operator+( string& left, const string& right);
		public :
		explicit string(const char* data, size_t size = 15 )
		{
			m_size = size;
			m_data = new char [m_size];
			std::strcpy(m_data,data );
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

		inline string operator+( string& left, const string& right)
		{
			string tmp("",left.m_size + right.m_size);
			std::strcat(tmp.m_data,left.m_data);
			std::strcat(tmp.m_data,right.m_data);
			return tmp;
		}
}

int main()
{
	CU::string full_name("John ");
	CU::string first_name{"Snow"};
	auto result = full_name + first_name;
	const char* ans = result.c_str();
	std::cout << ans << std::endl;
	return 0;
}

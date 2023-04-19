//============================================================================
// Name        : S38_OperOvrld_A6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : You'll print your own strings!
/*Your job is to set up an operator<< for the CU::string class in such a way that
 we can use it like below

    CU::string full_name("John Snow");
    use_cu_string(full_name);
and get

John Snow

Please note how we wrapped the string class in our own CU namespace to avoid
name conflicts with the std::string class from the C++ standard library.
Conflicts can occur if our string class is set up in the global namespace
and someone/somewhere has done something like using namespace std.*/
//============================================================================

#include <iostream>
#include <cstring>
namespace CU
{
	class string
	{
		friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
		public :
		string(const char* data, size_t size = 15 )
		{
			m_data = new char [size];
			std::strcpy(m_data,data );
		}

		~string()
		{
			delete [] m_data;
		}
		private :
		char * m_data{nullptr};
	};

	inline std::ostream& operator<< (std::ostream& out , const CU::string& s)
	{
		out << s.m_data;
		return out;
	}
}

inline void use_cu_string(const CU::string& s)
{
	std::cout << s;
}

int main()
{
	CU::string full_name("John Snow");
	use_cu_string(full_name);
	return 0;
}

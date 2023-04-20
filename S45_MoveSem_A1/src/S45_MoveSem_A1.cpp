//============================================================================
// Name        : S45_MoveSem_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Moving from CU::string's
//		write the appropriate  move constructor and move assignment operator
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
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}

	string(const string& source) = delete;


    //Move constructor
	string(string&& source)
	{
		if (this == &source)
            return;
		m_size = source.m_size;
		m_data = source.m_data;
		source.invalidate();
	}

	void invalidate()
	{
		m_size = 0;
		m_data = nullptr;
	}

	//Move assignment operator
	void operator= ( string&& source)
	{
		std::cout << "Move assignment operator called" << std::endl;
		if (this == &source)
            return;
		//Release potential previous memory
		delete[] m_data;
		m_data = nullptr;

		//Steal from source
		m_size = source.m_size;
		m_data = source.m_data;

		//Invalidate source
		source.invalidate();

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
}

int main()
{
	  CU::string s1("Hello");
	    CU::string tmp("World");
	    const char* storage = tmp.c_str();
	    CU::string s2(std::move(tmp));

	    CU::string s1("Hello");
	        CU::string tmp("World");
	        const char* storage = tmp.c_str();
	        s1 = std::move(tmp);
	return 0;
}

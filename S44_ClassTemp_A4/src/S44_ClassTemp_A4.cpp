//============================================================================
// Name        : S44_ClassTemp_A4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Template Specialization
//============================================================================

#include <iostream>
#include <cstring>


template <typename T>
struct Map
{
	T m_key;
	T m_value;
	Map(T key, T value)
	 : m_key(key), m_value(value)
	{}
	bool compare_to( const Map& other) const{
		return (m_key == other.m_key)&&(m_value == other.m_value);
	}

	void print_info() const{
		std::cout << "map [";
		std:: cout << m_key << "," << m_value;
		std::cout << "]";
	}

};

template <>
struct Map <const char*>
{
	const char* m_key;
	const char* m_value;
	Map(const char* key, const char* value);
	bool compare_to( const Map& other) const;
	void print_info() const;
};


//Constructor
Map<const char*>::Map(const char* key, const char* value)
	 : m_key(key), m_value(value)
{}

bool Map<const char*>::compare_to( const Map& other) const{
		return (std::strcmp(m_key,other.m_key) == 0)
			&&(std::strcmp(m_value,other.m_value) == 0);
}
void Map<const char*>::print_info() const{
		std::cout << "map [";
		std:: cout << m_key << "," << m_value;
		std::cout << "]";
}
int main()
{
	/*Map<int> m1(11,22);
	    Map<int> m2(11,22);
	    auto result = m1.compare_to(m2);
	    std::cout << "result : " << std::boolalpha << result << std::endl;
	    m1.print_info();*/

	    Map<const char*> m1("Daniel","Gakwaya");
	       std::string last_name {"Daniel"};
	       std::string first_name{"Gakwaya"};
	       Map<const char*> m2(last_name.c_str(),first_name.c_str());
	       auto result = m1.compare_to(m2);
	       std::cout << "result : " << std::boolalpha << result << std::endl;
	return 0;
}

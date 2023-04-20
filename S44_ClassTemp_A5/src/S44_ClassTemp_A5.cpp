//============================================================================
// Name        : S44_ClassTemp_A5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Template Specialization with select menthosd
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
	bool compare_to( const Map& other) const;


	void print_info() const{
		std::cout << "map [";
		std:: cout << m_key << "," << m_value;
		std::cout << "]";
	}

};

template <typename T>
bool Map<T>::compare_to( const Map& other) const
{
	return (m_key == other.m_key)&&(m_value == other.m_value);
}
template<>
bool Map<const char*>::compare_to( const Map& other) const
{
		return (std::strcmp(m_key,other.m_key) == 0)
			&&(std::strcmp(m_value,other.m_value) == 0);
}
int main()
{
	  Map<const char*> m1("Steve","Murphy");
	    std::string last_name {"Steve"};
	    std::string first_name{"Murphy"};
	    Map<const char*> m2(last_name.c_str(),first_name.c_str());
	    auto result = m1.compare_to(m2);
	    std::cout << "result : " << std::boolalpha << result << std::endl;
	return 0;
}

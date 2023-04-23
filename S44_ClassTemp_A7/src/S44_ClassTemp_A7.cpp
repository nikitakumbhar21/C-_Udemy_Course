//============================================================================
// Name        : S44_ClassTemp_A7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Stream insert'em Maps!
//				You will write the stream insertion operator for the Map class
//============================================================================

#include <iostream>
#include <string>

//Forward declare the friends
template <typename T, typename P> struct Map;
template <typename T, typename P> std::ostream& operator<< (std::ostream&, const Map<T,P>&);

template <typename T, typename P>
struct Map
{
    friend std::ostream& operator<< <> (std::ostream&, const Map<T,P>&);
    T m_key;
    P m_value;
public:
    Map(T key, P value)
     : m_key(key), m_value(value)
    {}
};

template <typename T, typename P>
std::ostream& operator<<(std::ostream& os, const Map<T,P>& map)
{
    os << "Map : [" << map.m_key << "," << map.m_value << "]";
    return os;
}

int main()
{
    Map<int, std::string> m1(11222, "Steve Murphy");
    std::cout << m1;
    std::cout << std::endl;
    return 0;
}

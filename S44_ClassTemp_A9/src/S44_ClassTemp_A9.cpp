//============================================================================
// Name        : S44_ClassTemp_A9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Concept constrain your maps!
//				You will use C++20 concepts to type constrain the Map class.
//				Your job to use C++20 concepts to constrain T to only be of
//				an integral type and P to be of std::string type.
//============================================================================

#include <concepts>
#include <iostream>
#include <string>

template <typename T, typename P>
struct Map
{
private:
    friend std::ostream& operator<<(std::ostream& out, const Map<T, P>& operand);
    T m_key;
    P m_value;

public:
    Map(T key, P value) : m_key(key), m_value(value) {}
};

template <typename T, typename P>
concept Integral = std::integral<T>;

template <typename P>
concept String = std::same_as<P, std::string>;

template <typename T, typename P>
requires Integral<T> && String<P>
std::ostream& operator<<(std::ostream& out, const Map<T, P>& operand)
{
    out << "Map : [" << operand.m_key << "," << operand.m_value << "]";
    return out;
}

int main()
{
    Map<int, std::string> m1(11222, std::string{"Steve Murphy"}); // Works
    Map<long int, std::string> m2(22333, "Ahmed Malik"); // Works
    //Map<double,unsigned int> m3(22.1,44555); // Should fail to compile

    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    //std::cout << m3 << std::endl;

    return 0;
}


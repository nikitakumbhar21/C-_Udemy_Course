//============================================================================
// Name        : S44_ClassTemp_A8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :  Type traits constrained Maps!
//				You will use static asserts and type traits to constrain the
//				template arguments usable with the Map class.
//============================================================================

#include <iostream>
#include <string>
#include <type_traits>

template <typename T, typename P>
struct Map
{
private:
    static_assert(std::is_integral<T>::value, "Keys can only be of integral type");
    static_assert(std::is_same<P, std::string>::value, "Values can only be of std::string type");

    T m_key;
    P m_value;
public:
    Map(T key, P value)
        : m_key(key), m_value(value)
    {}

    friend std::ostream& operator<<(std::ostream& os, const Map<T, P>& m)
    {
        os << m.m_key << ": " << m.m_value;
        return os;
    }
};

int main()
{
    Map<int, std::string> m1(11222, "Steve Murphy");
    Map<long int, std::string> m2(22333, "Ahmed Malik");
    //Map<double,unsigned int> m3(22.1,44555);
    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    return 0;
}

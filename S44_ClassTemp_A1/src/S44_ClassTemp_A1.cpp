//============================================================================
// Name        : S44_ClassTemp_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Your job is to create a class template called Map, which allows people to store key,value pairs of data. We should have the ability to create Map objects like below
/*
Map map1(111222,std::string{"Steve Murphy"});
and print out the data in the object like below

    std::cout << "key : " << map1.m_key << std::endl;
    std::cout << "value : " << map1.m_value << std::endl;
this should output

key : 111222
value : Steve Murphy
on the console. */
//============================================================================

#include <iostream>
#include <map>

template <typename K, typename V>
class Map {
public:
    Map(const K& key, const V& value) : m_key(key), m_value(value) {}

    K getKey() const { return m_key; }
    V getValue() const { return m_value; }

    void setKey(const K& key) { m_key = key; }
    void setValue(const V& value) { m_value = value; }

private:
    K m_key;
    V m_value;
};

int main() {
    Map<int, std::string> map1(111222, "Steve Murphy");

    std::cout << "key : " << map1.getKey() << std::endl;
    std::cout << "value : " << map1.getValue() << std::endl;

    return 0;
}


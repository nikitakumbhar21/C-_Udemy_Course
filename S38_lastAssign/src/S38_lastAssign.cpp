//============================================================================
// Name        : S38_lastAssign.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : write your own string class to mimic the std::string one.
//============================================================================

#include <iostream>
#include <cstring>

class MyString
{
public:
    // Default constructor
    MyString() : m_data(nullptr), m_size(0) {}

    // Constructor with char array parameter
    MyString(const char* str) : m_data(nullptr), m_size(0)
    {
        m_size = std::strlen(str);
        m_data = new char[m_size + 1];
        std::strcpy(m_data, str);
    }

    // Copy constructor
    MyString(const MyString& other) : m_data(nullptr), m_size(0)
    {
        m_size = other.m_size;
        m_data = new char[m_size + 1];
        std::strcpy(m_data, other.m_data);
    }

    // Destructor
    ~MyString()
    {
        if (m_data != nullptr)
        {
            delete[] m_data;
        }
    }

    // Assignment operator
    MyString& operator=(const MyString& other)
    {
        if (this != &other)
        {
            delete[] m_data;
            m_size = other.m_size;
            m_data = new char[m_size + 1];
            std::strcpy(m_data, other.m_data);
        }
        return *this;
    }

    // Equality operator
    bool operator==(const MyString& other) const
    		{
        return std::strcmp(m_data, other.m_data) == 0;
    }

    // Addition operator
    MyString operator+(const MyString& other) const
    {
        MyString newString;
        newString.m_size = m_size + other.m_size;
        newString.m_data = new char[newString.m_size + 1];
        std::strcpy(newString.m_data, m_data);
        std::strcat(newString.m_data, other.m_data);
        return newString;
    }

    // Stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const MyString& str)
    {
        os << str.m_data;
        return os;
    }

    // Returns the length of the string
    size_t length() const
    {
        return m_size;
    }

private:
    char* m_data; // Pointer to the underlying character array
    size_t m_size; // Size of the string
};

int main()
{
    MyString str1("Sasken");
    MyString str2("Technologies");
    MyString str3 = str1 + str2;

    std::cout << str3 << std::endl;
    std::cout << "Length of str3: " << str3.length() << std::endl;

    MyString str4 = "Sasken";
    std::cout << "str1 == str4: " << (str1 == str4) << std::endl;

    str1 = str2;
    std::cout << "str1: " << str1 << std::endl;

    return 0;
}

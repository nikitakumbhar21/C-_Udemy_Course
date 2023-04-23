//============================================================================
// Name        : S29_C++Concep_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Put'em std::strings together!
//				Your job will be to write a function template that concatenates
//				numbers as strings.
//				 The name of your function will be concatenate.
//============================================================================

#include <iostream>
#include <string>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T t)
{
    std::to_string(t);
};

template <ConvertibleToStdString... Ts>

std::string concatenate(Ts... args)
{
    std::string result = "";
    ((result += std::to_string(args)), ...);
    return result;
}

int main()
{
    auto result1 = concatenate(22.22, 33.33);
    std::cout << "result1 : " << result1 << std::endl; // prints "result1 : 22.22000033.330000"

    auto result2 = concatenate(22, 33);
    std::cout << "result2 : " << result2 << std::endl; // prints "result2 : 2233"

    // This won't compile because std::complex<double> is not ConvertibleToStdString
    // auto result3 = concatenate(std::complex<double>{1.0, 2.0}, 3.14159);
}

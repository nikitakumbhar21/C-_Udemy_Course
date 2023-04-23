//============================================================================
// Name        : S29_C++Concep_A2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Put'em different types together!
//				You will fix our function template work with different typed arguments.
//============================================================================

#include <iostream>
#include <string>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T n)
{
    std::to_string(n);
};

template <typename T, typename U>
concept SameUnderlyingType = std::same_as<std::underlying_type_t<T>, std::underlying_type_t<U>>;

template <typename T, typename U>
requires ConvertibleToStdString<T> && ConvertibleToStdString<U> && SameUnderlyingType<T, U>
auto concatenate(const T n1, const U n2)
-> decltype(std::to_string(n1) + std::to_string(n2))
{
    return std::to_string(n1) + std::to_string(n2);
}

int main()
{
    auto result = concatenate(11,22.22);
    std::cout << "result : " << result << std::endl;
    return 0;
}

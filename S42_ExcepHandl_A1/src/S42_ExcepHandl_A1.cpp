//============================================================================
// Name        : S42_ExcepHandl_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Try and Catch blocks and scope
//============================================================================

#include <iostream>

int divide_impl(int num, int den)
{
    if (den == 0)
    {
        throw -1;
    }
    return num / den;
}

void divide(int a, int b)
{
    try
    {
        int result = divide_impl(a, b);
        std::cout << "result: " << result << std::endl;
    }
    catch (int e)
    {
        std::cout << "handling thrown exception: " << e << std::endl;
    }
}

int main()
{
    divide(10, 2);  // result: 5
    divide(10, 0);  // handling thrown exception: -1
    return 0;
}

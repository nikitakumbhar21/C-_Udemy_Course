//============================================================================
// Name        : S47_STLContIter_A1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Unions
/*Given two sorted (in ascending order)  collections l1 and l2 :

    std::list<int> l1 = {3, 4, 5,7,11};
    std::list<int> l2 = {1,4,6,7,9};
The union of these two is defined as a collection containing all instances
of elements from both collections without duplicates. For example, l1 Union l2
would be the collection {1, 3 ,4, 5, 6 ,7 ,9,11}, which is also sorted.

Your job is to complete the union_func function in such a way that it uses
iterators to loop through both lists, building a union of both lists and storing
the elements in the result collection that we eventually return from the function.*/
//============================================================================

#include <iostream>
#include <list>

template <typename T>
std::list<T> union_func(const std::list<T>& l1, const std::list<T>& l2)
{
    std::list<T> result;
    auto itl1 = l1.begin();
    auto itl2 = l2.begin();

    while (itl1 != l1.end() && itl2 != l2.end())
    {
        if (*itl1 < *itl2)
        {
            result.push_back(*itl1);
            ++itl1;
        } else if (*itl2 < *itl1)
        {
            result.push_back(*itl2);
            ++itl2;
        } else
        {
            result.push_back(*itl1);
            ++itl1;
            ++itl2;
        }
    }

    while (itl1 != l1.end())
    {
        result.push_back(*itl1);
        ++itl1;
    }

    while (itl2 != l2.end()) {
        result.push_back(*itl2);
        ++itl2;
    }

    return result;
}

template <typename T>
void print_list(const std::list<T>& l)
{
    for (auto &e : l)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> l1 = {3, 4, 5, 7, 11};
    std::list<int> l2 = {1, 4, 6, 7, 9};

    std::list<int> result = union_func(l1, l2);

    print_list(result);

    return 0;
}


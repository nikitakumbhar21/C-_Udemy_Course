//============================================================================
// Name        : S36_multifiles_A3.cpp (Linkage)
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Linkage
//============================================================================

#include <iostream>

const double distance{}; // Declaration and definition

extern int item_count; // Declaration of some variable defined in some
                       // other translation unit

//Functions have external linkage by default
void print_distance()
{
    std::cout << "distance (other_file) : " << distance << " &distance  :"
     << &distance << std::endl;
}

void print_item_count()
{
    std::cout << "item_count(other_file) : " << item_count << " &item_count : "
        << &item_count << std::endl;
}
//No linkage
void some_function()
{
    int age {34}; // No linkage
    std::cout << "age : " << age << " &age : " << &age << std::endl;
}

//const double distance{45.8}; // Internal linkage

int item_count {6}; // External linkage

extern void print_distance();
extern void print_item_count();

int main(){

    /*
    std::cout << "distance(main) : " << distance << "  &distance : " << &distance <<std::endl;
    std::cout << "-----" << std::endl;
    print_distance();
    */

    std::cout << "item_count(main) : " << item_count << " &item_count : "
        << &item_count << std::endl;

    std::cout << "------------------------------------------------------" << std::endl;
    print_item_count();
    print_distance();

    return 0;
}

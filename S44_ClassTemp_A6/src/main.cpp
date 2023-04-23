//============================================================================
// Name        : S44_ClassTemp_A6.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Stream insert'em Points!
//				write a friend stream insertion operator for our multi-dimensional Point class.
//============================================================================

#include "point.h"
#include <iostream>

int main() {
    Point<int, 3> point_3d;
    point_3d.set_value(0, 10);
    point_3d.set_value(1, 20);
    point_3d.set_value(2, 30);
    std::cout << point_3d << std::endl;
    return 0;
}

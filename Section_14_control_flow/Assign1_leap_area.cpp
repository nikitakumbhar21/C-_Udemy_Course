#include "exercise.h"

bool is_leap_year( unsigned int year){

    bool is_leap{};

    //Don't modify anything above this line
    //Your code goes below this line

       if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
         is_leap = true;
    }
    else{
        is_leap = false;
    }
    //Your code goes above this line
    //Don't modify anything below this line

    return is_leap;
}

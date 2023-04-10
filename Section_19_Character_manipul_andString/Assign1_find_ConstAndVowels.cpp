#include <iostream>
#include "exercise.h"


void find_stuf_out( char data[] , unsigned int size){

    unsigned int vowel_count{};
    unsigned int consonant_count{};

    //Don't modify anything above this line
    //Your code should go below this line
    for(unsigned int i{}; i < size; ++i){

        if(std::isalpha(data[i])){

            if((data[i] == 'a')||
            (data[i] == 'A')||
            (data[i] == 'e')||
            (data[i] == 'E')||
            (data[i] == 'i')||
            (data[i] == 'I')||
            (data[i] == 'o')||
            (data[i] == 'O')||
            (data[i] == 'u')||
            (data[i] == 'U') ){
                ++ vowel_count;
            }else{
                ++consonant_count;
            }
        }

    }

    //Your code should go above this line
    //Don't modify anything below this line

    std::cout << "The string contains " << vowel_count << " vowels and "
        << consonant_count << " consonants";
}

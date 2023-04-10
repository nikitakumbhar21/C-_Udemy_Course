#include <iostream>
#include <cstring>


void find_matches(std::string data[] , unsigned int size, const char* key){

    std::string * matches = new std::string [size]; // Create std::string array on the heap. Remember to release

    unsigned int matches_found{};

    for(unsigned int i{}; i < size ; ++i){

        if(data[i].find(key)!= std::string::npos){
            matches[matches_found++] = data[i];
        }

    }

    std::cout << "Found " << matches_found << " matches. They are: ";
    for(unsigned int i{}; i < matches_found; ++i){
        if(i == matches_found -1){
            std::cout << matches[i];
        }else{
            std::cout << matches[i] << " ";
        }
    }

    delete[] matches; // Remember to release the memory.

}

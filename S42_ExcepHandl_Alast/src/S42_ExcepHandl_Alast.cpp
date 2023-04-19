//============================================================================
// Name        : S42_ExcepHandl_Alast.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Read integers from a file and handle problems that can arise in the process.
//============================================================================

#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

void read_from_file(std::string_view filename, size_t size, int * data)
{
    std::ifstream fstrem_in{ filename.data() };

    // check if file is open
    if (!fstrem_in.is_open()) {
        std::string message = "Unable to open file " + std::string(filename);
        throw std::runtime_error(message);
    }

    int value;
    int index{};
    while (fstrem_in >> value) {
        // check if index is within array bounds
        if (index >= size) {
            throw std::runtime_error("Too many numbers in file");
        }
        data[index++] = value;
    }

    // check if any error occurred while reading file
    if (fstrem_in.fail() && !fstrem_in.eof()) {
        throw std::runtime_error("Something went wrong while reading the file");
    }
}

int main()
{
    int data[4]{};
    try {
        read_from_file("numbers.txt", std::size(data), data);
        for(auto i : data) {
            std::cout << "value : " << i << std::endl;
        }
    }
    catch(std::exception const& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}


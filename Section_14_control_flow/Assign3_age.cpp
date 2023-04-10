#include <iostream>

int main() {

  int age;

  std::cout << "Enter your age: ";

  std::cin >> age;

  if (age >= 21 && age <= 39) {

    std::cout << "You are eligible for the medical treatment." << std::endl;

  } else {

    std::cout << "Sorry, You are too young for the medical treatment." << std::endl;

  }

  return 0;

}


#include <iostream>

int main() {

  double celsius;

  std::cout << "Please enter value in Celsius: ";

  std::cin >> celsius;

  double fahrenheit = (9.0 / 5) * celsius + 32;

  std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << std::endl;

  return 0;

}
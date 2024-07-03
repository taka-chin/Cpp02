#include "Fixed.hpp"

#include <iostream>
int main(void) {
  /* Fixed::min(); */
  Fixed a(100);
  Fixed b(10);
  /* Fixed const b(Fixed(5.05f) * Fixed(2)); */
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << a + b << std::endl;
  std::cout << a - b << std::endl;
  std::cout << a * b << std::endl;
  std::cout << a / b << std::endl;
  /* std::cout << ++a << std::endl; */
  /* std::cout << a << std::endl; */
  /* std::cout << a++ << std::endl; */
  /* std::cout << a << std::endl; */
  /* std::cout << b << std::endl; */
  std::cout << Fixed::max(a, b) << std::endl;
  std::cout << Fixed::min(a, b) << std::endl;
  return 0;
}

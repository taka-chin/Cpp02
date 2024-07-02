#include "Fixed.hpp"
#include <cmath>

#include <iostream>

Fixed::Fixed() : fixedPointNum(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int inputNum) {
  std::cout << "int constructor called" << std::endl;
  fixedPointNum = inputNum << digits;
}

Fixed::Fixed(const float inputNum) {
  std::cout << "float constructor called" << std::endl;
  fixedPointNum = roundf(inputNum * (1 << digits));
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &f) {
  std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Fixed &Fixed::operator=(const Fixed &f) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->fixedPointNum = f.getRawBits();
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->fixedPointNum;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->fixedPointNum = raw;
}

float toFloat(void) const {
  int fixedPointNum = Fixed::getRawBits();
  float ret = float(fixedPointNum / (1 << 8));
  return ret;
}

int toInt(void) const {
  int fixedPointNum = Fixed::getRawBits();
  int ret = fixedPointNum >> digits;
  return ret;
}

std::ostream &operator<<(std::ostream &output) {
  output << Fixed::toFloat();
  return output;
}

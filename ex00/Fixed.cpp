#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed() : num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = f.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->num;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

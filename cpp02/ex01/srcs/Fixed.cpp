#include "Fixed.hpp"

Fixed::Fixed() : _n(0) {

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;

}

int Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);

}

void Fixed::setRawBits( int const raw ) {

	this->_n = raw;

}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;

}

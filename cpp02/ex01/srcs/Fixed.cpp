#include "Fixed.hpp"

Fixed::Fixed() : _n(0) {

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

}

Fixed::Fixed( const int n) {

	std::cout << "Int constructor called" << std::endl;

	this->_n = n << this->_b;

}

Fixed::Fixed( const float f ) {

	std::cout << "Float constructor called" << std::endl;

	int power = pow(2, this->_b);

	this->_n = roundf(f * power);

}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;

}

float Fixed::toFloat( void ) const {

	float f;
	int power = pow(2, this->_b);

	f = (float)this->_n / power;
	return f;

}

int Fixed::toInt( void ) const {

	int i;

	i = this->_n >> this->_b;
	return i;

}

int Fixed::getRawBits() const {

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

std::ostream & operator<<( std::ostream &o, Fixed const &inst ) {

	o << inst.toFloat();
	return o;

}

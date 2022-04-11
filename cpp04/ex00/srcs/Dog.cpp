#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"), sound("Woof")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const & src ) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=( Dog const & rhs ) {

	this->sound = rhs.sound;
	return *this;

}

void Dog::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

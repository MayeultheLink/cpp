#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"), sound("Ouaf") {}

Dog::Dog( Dog const & src ) : Animal(src) {*this = src;}

Dog::~Dog( void ) {}

Dog & Dog::operator=( Dog const & rhs ) {

	this->sound = rhs.sound;
	return *this;

}

void Dog::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

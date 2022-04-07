#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"), sound("Miaou") {}

Cat::Cat( Cat const & src ) : Animal(src) {*this = src;}

Cat::~Cat( void ) {}

Cat & Cat::operator=( Cat const & rhs ) {

	this->sound = rhs.sound;
	return *this;

}

void Cat::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

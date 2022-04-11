#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"), sound("Meow")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat & Cat::operator=( Cat const & rhs ) {

	this->sound = rhs.sound;
	return *this;

}

void Cat::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

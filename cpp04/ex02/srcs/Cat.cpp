#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"), sound("Meow"), brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
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
	this->brain = new Brain;
	for (int i=0; i < 100; i++)
		this->brain->ideas[i] = rhs.brain->ideas[i];
	return *this;

}

void Cat::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

void Cat::setIdeas( std::string ideas ) {

	this->brain->ideas[0] = ideas;

}

void Cat::getIdeas( void ) const {

	std::cout << this->brain->ideas[0] << std::endl;

}

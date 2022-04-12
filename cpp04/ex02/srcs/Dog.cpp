#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"), sound("Woof"), brain(new Brain())
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
	delete this->brain;
}

Dog & Dog::operator=( Dog const & rhs ) {

	this->sound = rhs.sound;
	this->brain = new Brain;
	for (int i=0; i < 100; i++)
		this->brain->ideas[i] = rhs.brain->ideas[i];
	return *this;

}

void Dog::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

void Dog::setIdeas( std::string ideas ) {

	this->brain->ideas[0] = ideas;

}

void Dog::getIdeas( void ) const {

	std::cout << this->brain->ideas[0] << std::endl;

}

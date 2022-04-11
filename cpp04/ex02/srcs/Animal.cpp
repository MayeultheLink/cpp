#include "Animal.hpp"

Animal::Animal( void ) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << "Animal derived constructor called" << std::endl;
}

Animal::Animal( Animal const & src ) 
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void Animal::makeSound( void ) const
{
	std::cout << "???" << std::endl;
}

std::string const & Animal::getType( void ) const
{
	return this->type;
}

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << "WrongAnimal derived constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) 
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "???" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return this->type;
}

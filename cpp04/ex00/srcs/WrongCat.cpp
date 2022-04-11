#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat"), sound("Meow")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {

	this->sound = rhs.sound;
	return *this;

}

void WrongCat::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

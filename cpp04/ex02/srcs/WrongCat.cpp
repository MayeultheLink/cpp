#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat"), sound("Miaou") {}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src) {*this = src;}

WrongCat::~WrongCat( void ) {}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {

	this->sound = rhs.sound;
	return *this;

}

void WrongCat::makeSound( void ) const {

	std::cout << this->sound << std::endl;

}

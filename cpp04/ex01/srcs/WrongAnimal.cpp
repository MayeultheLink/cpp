#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {}

WrongAnimal::WrongAnimal( std::string type ) : type(type) {}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {*this = src;}

WrongAnimal::~WrongAnimal( void ) {}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {

	this->type = rhs.type;
	return *this;

}

void WrongAnimal::makeSound( void ) const {

	std::cout << "*WrongAnimal sound*" << std::endl;

}

std::string WrongAnimal::getType( void ) const {

	return this->type;

}

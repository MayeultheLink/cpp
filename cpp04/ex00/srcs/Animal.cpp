#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") {}

Animal::Animal( std::string type ) : type(type) {}

Animal::Animal( Animal const & src ) {*this = src;}

Animal::~Animal( void ) {}

Animal & Animal::operator=( Animal const & rhs ) {

	this->type = rhs.type;
	return *this;

}

void Animal::makeSound( void ) const {

	std::cout << "*Animal sound*" << std::endl;

}

std::string Animal::getType( void ) const {

	return this->type;

}

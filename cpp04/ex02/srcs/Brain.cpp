#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( Brain const & src ) {*this = src;}

Brain & Brain::operator=( Brain const & rhs ) {

	for (int i=0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;

}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}

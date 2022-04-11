#ifndef BRAIN_H
# define BRAIN_H

#include "Animal.hpp"

class Brain {

public :

	Brain( void );
	Brain( Brain const & src );
	Brain & operator=( Brain const & rhs );
	~Brain( void );

	std::string ideas[100];

};

#endif

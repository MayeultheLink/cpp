#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {

public :

	Animal( void );
	Animal( Animal const & src );
	Animal & operator=( Animal const & rhs );
	virtual ~Animal( void );

	virtual void makeSound( void ) const;
	std::string const & getType( void ) const;

	virtual void setIdeas( std::string ideas );
	virtual void getIdeas( void ) const;

protected :

	Animal( std::string type );

	std::string type;

};

#endif

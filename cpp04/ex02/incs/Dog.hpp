#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public :

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );
	Dog & operator=( Dog const & rhs );

	virtual void setIdeas( std::string ideas );
	virtual void getIdeas( void ) const;

private :

	std::string sound;
	Brain* brain;

	virtual void makeSound( void ) const;

};

#endif

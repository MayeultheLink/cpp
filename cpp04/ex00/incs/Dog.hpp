#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public :

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );
	Dog & operator=( Dog const & rhs );

private :

	std::string sound;

	virtual void makeSound( void ) const;

};

#endif

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public :

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );
	Cat & operator=( Cat const & rhs );

	virtual void setIdeas( std::string ideas );
	virtual void getIdeas( void ) const;

private :

	std::string sound;
	Brain* brain;

	virtual void makeSound( void ) const;

};

#endif

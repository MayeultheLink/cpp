#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Form;

class Intern {

public :

	Intern( void );
	Intern( const Intern & src );
	~Intern( void );
	Intern & operator=( const Intern & rhs );

	Form * makeForm( std::string const & name, std::string const & target ) const;

};

#endif

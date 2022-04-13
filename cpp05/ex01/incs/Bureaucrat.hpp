#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

public :

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat & src );
	~Bureaucrat( void );
	Bureaucrat & operator=( const Bureaucrat & rhs );

	std::string const & getName( void ) const;
	int const & getGrade( void ) const;
	void increment( void );
	void decrement( void );

	void signForm( const Form & form ) const;

private :

	const std::string _name;
	int _grade;

	void checkGrade( void ) const;

class GradeTooHighException : public std::exception {

	public :
	
		virtual const char* what() const throw();

	};

class GradeTooLowException : public std::exception {

	public :
	
		virtual const char* what() const throw();

	};

};

std::ostream & operator<<( std::ostream & cout, const Bureaucrat & rhs );

#endif

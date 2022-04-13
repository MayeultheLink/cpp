#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

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

private :

	const std::string _name;
	int _grade;

	void checkGrade( void );

	class GradeTooHighException : public std::exception {

	public :
	
		virtual const char* what() const throw()
		{return ("Grade too high");}

	};

	class GradeTooLowException : public std::exception {

	public :
	
		virtual const char* what() const throw()
		{return ("Grade too low");}

	};

};

std::ostream & operator<<( std::ostream & cout, const Bureaucrat & rhs );

#endif

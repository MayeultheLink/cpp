#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public :

	Form( void );
	Form( std::string name, int gradeSign, int gradeExe );
	Form( const Form & src );
	~Form( void );
	Form & operator=( const Form & rhs );

	std::string const & getName( void ) const;
	int const & getGradeSign( void ) const;
	int const & getGradeExe( void ) const;
	bool const & getSign( void ) const;

	void beSigned( const Bureaucrat & bureaucrat );

private :

	const std::string _name;
	const int _gradeSign;
	const int _gradeExe;
	bool _sign;

	void checkGrade( void );

class GradeTooHighException : public std::exception {

	public :

		virtual const char* what() const throw();

	};

class GradeTooLowException : public std::exception {

	public :

		virtual const char* what() const throw();

	};

};

std::ostream & operator<<( std::ostream & cout, const Form & rhs );

#endif

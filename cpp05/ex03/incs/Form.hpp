#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public :

	Form( void );
	Form( std::string name, int gradeSign, int gradeExe );
	Form( const Form & src );
	virtual ~Form( void );
	Form & operator=( const Form & rhs );

	std::string const & getName( void ) const;
	int const & getGradeSign( void ) const;
	int const & getGradeExe( void ) const;
	bool const & getSign( void ) const;

	void beSigned( Bureaucrat const & bureaucrat );
	virtual void execute( Bureaucrat const & executor ) const = 0;

protected :

	const std::string _name;
	const int _gradeSign;
	const int _gradeExe;
	bool _sign;

	void checkGrade( void ) const;

class GradeTooHighException : public std::exception {

	public :

		virtual const char* what() const throw();

	};

class GradeTooLowException : public std::exception {

	public :

		virtual const char* what() const throw();

	};

class GradeTooLowToSignException : public std::exception {

    public :

		virtual const char* what() const throw();

    };

class GradeTooLowToExecuteException : public std::exception {

    public :

		virtual const char* what() const throw();

    };

class FormNotSignedException : public std::exception {

    public :

		virtual const char* what() const throw();

    };

};

std::ostream & operator<<( std::ostream & cout, const Form & rhs );

#endif

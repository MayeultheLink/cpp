#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern( void ) {}

Intern::Intern( const Intern & src )
{
	*this = src;
}

Intern & Intern::operator=( const Intern & rhs )
{
	return *this;
}

Intern::~Intern( void ) {}

Form * getForm( int i )
{
	if (i == 0)
		return (new PresidentialPardonForm());
	else if (i == 1)
		return (new RobotomyRequestForm());
	else if (i == 2)
		return (new ShrubberyCreationForm());
}

std::string getName( std::string name )
{
	std::string new;
	for (int i=0; i < name.length(); i++)
		new += toupper(name.c_str()[i]);
	return new;
}

Form * Intern::makeForm( std::string const & name, std::string const & target )
{
	std::string getName = getName(name);
	std::string formName[3] = {"PRESIDENTIAL PARDON", "ROBOTOMY REQUEST", "SHRUBBERY CREATION"};
	for (int i = 0; i < 3; i++)
		if (getName == formName[i])
			return getForm(i);
	return NULL;
}
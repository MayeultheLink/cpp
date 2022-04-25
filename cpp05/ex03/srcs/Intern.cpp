#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ) {}

Intern::Intern( const Intern & src )
{
	*this = src;
}

Intern & Intern::operator=( const Intern & )
{
	return *this;
}

Intern::~Intern( void ) {}

Form * getForm( int i, std::string const & target )
{
	if (i == 0)
		return (new PresidentialPardonForm(target));
	else if (i == 1)
		return (new RobotomyRequestForm(target));
	else if (i == 2)
		return (new ShrubberyCreationForm(target));
	return NULL;
}

std::string getName( std::string name )
{
	std::string tmp;
	for (int i=0; i < (int)name.length(); i++)
		tmp += toupper(name.c_str()[i]);
	return tmp;
}

Form * Intern::makeForm( std::string const & name, std::string const & target ) const
{
	std::string newName = getName(name);
	std::string formName[3] = {"PRESIDENTIAL PARDON", "ROBOTOMY REQUEST", "SHRUBBERY CREATION"};
	for (int i = 0; i < 3; i++)
		if (newName == formName[i])
		{
			std::cout << "Intern creates " << newName << std::endl;
			return getForm(i, target);
		}
	return NULL;
}
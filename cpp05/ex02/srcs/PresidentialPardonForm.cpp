#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src.getName(), src.getGradeSign(), src.getGradeExe()), _target(src._target)
{
	this->_sign = src.getSign();
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	std::cout << "Name, grade to sign and grade to execute cannot be assigned, left to default" << std::endl;
	this->_sign = rhs._sign;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

std::string const & PresidentialPardonForm::getName( void ) const {

	return this->_name;

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > 25)
		throw Form::GradeTooLowToExecuteException();
	else if (!this->_sign)
		throw Form::FormNotSignedException();
	else
	{
		std::cout << "I, " << executor.getName() << ", now hereby pronounce the pardonning of " << this->_target << " by official decree from the Mighty Zaphod Beeblebrox, beloved leader of our great nation !" << std::endl << "GG dude." << std::endl;
	}
}

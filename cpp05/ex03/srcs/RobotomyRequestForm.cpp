#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getGradeSign(), src.getGradeExe()), _target(src._target)
{
	this->_sign = src.getSign();
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	std::cout << "Name, grade to sign and grade to execute cannot be assigned, left to default" << std::endl;
	this->_sign = rhs._sign;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

std::string const & RobotomyRequestForm::getName( void ) const {

	return this->_name;

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	static int i;
	if (executor.getGrade() > 45)
		throw Form::GradeTooLowToExecuteException();
	else if (!this->_sign)
		throw Form::FormNotSignedException();
	else
	{
		std::cout << "*bruits de perceuse*" << std::endl;
		if (i % 2 == 0)
			std::cout << this->_target << " has been successfully robotomised. Proceed with the rest of the mission as planned." << std::endl;
		else
			std::cout << "Failure to robotomise " << this->_target << ". Abort mission." << std::endl;
		i++;
	}
}

#include "Form.hpp"

Form::Form( void ) : _name("default"), _gradeSign(150), _gradeExe(150), _sign(false) {this->checkGrade();}

Form::Form( std::string name, int gradeSign, int gradeExe ) : _name(name), _gradeSign(gradeSign), _gradeExe(gradeExe), _sign(false) {this->checkGrade();}

Form::Form( const Form & src ) : _name(src._name), _gradeSign(src._gradeSign), _gradeExe(src._gradeExe), _sign(src._sign)
{
	*this = src;
}

Form & Form::operator=( const Form & rhs )
{
	std::cout << "Name, grade to sign and grade to execute cannot be assigned, left to default" << std::endl;
	this->_sign = rhs._sign;
	return *this;
}

Form::~Form( void ) {}

std::string const & Form::getName( void ) const {

	return this->_name;

}

int const & Form::getGradeSign( void ) const {

	return this->_gradeSign;

}

int const & Form::getGradeExe( void ) const {

	return this->_gradeExe;

}

bool const & Form::getSign( void ) const {

	return this->_sign;

}

void Form::checkGrade( void ) {

	if (this->_gradeSign > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeSign < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeExe > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeExe < 1)
		throw Form::GradeTooHighException();

}

void Form::beSigned( const Bureaucrat & bureaucrat ) {

	if (bureaucrat.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else
		this->_sign = true;

}

const char* Form::GradeTooHighException::what( void ) const throw() {
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what( void ) const throw() {
	return ("Grade too low.");
}
std::ostream & operator<<( std::ostream & cout, Form const & rhs ) {

	cout << "// Form \"" << rhs.getName() << "\" //" << std::endl;
	cout << "	Bureaucrat grade " << rhs.getGradeSign() << " needed to be signed." << std::endl;
	cout << "	Bureaucrat grade " << rhs.getGradeExe() << " needed to be executed." << std::endl;
	if (rhs.getSign())
		std::cout << "// This form has already been signed //" << std::endl;
	else
		std::cout << "// This form has not been signed //" << std::endl;
	return cout;

}

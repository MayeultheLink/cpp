#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {this->checkGrade();}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
	std::cout << "Name cannot be assigned, left to default" << std::endl;
	this->_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat( void ) {}

std::string const & Bureaucrat::getName( void ) const {

	return this->_name;

}

int const & Bureaucrat::getGrade( void ) const {

	return this->_grade;

}

void Bureaucrat::increment( void ) {

	--this->_grade;
	this->checkGrade();

}

void Bureaucrat::decrement( void ) {

	++this->_grade;
	this->checkGrade();

}

void Bureaucrat::checkGrade( void ) {

	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();

}

std::ostream & operator<<( std::ostream & cout, Bureaucrat const & rhs ) {

	cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return cout;

}

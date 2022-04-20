#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src.getName(), src.getGradeSign(), src.getGradeExe()), _target(src._target)
{
	this->_sign = src.getSign();
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
	std::cout << "Name, grade to sign and grade to execute cannot be assigned, left to default" << std::endl;
	this->_sign = rhs._sign;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

std::string const & ShrubberyCreationForm::getName( void ) const {

	return this->_name;

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (executor.getGrade() > 137)
		throw Form::GradeTooLowToExecuteException();
	else if (!this->_sign)
		throw Form::FormNotSignedException();
	else
	{
		std::ofstream fs;
		std::string fileName = this->_target;
		fileName += "_shrubbery";
		fs.open(fileName.c_str());
		fs << "                  / \\" << std::endl;
		fs << "     /\\          /   \\" << std::endl;
		fs << "    /  \\  /\\    /     \\" << std::endl;
		fs << "   /    \\/  \\  /       \\" << std::endl;
		fs << "  /      \\   \\/         \\" << std::endl;
		fs << " /        \\  /           \\" << std::endl;
		fs << "/___    ___\\/             \\" << std::endl;
		fs << "    |  |   /               \\" << std::endl;
		fs << "          /_____       _____\\" << std::endl;
		fs << "                |     |" << std::endl;
		fs.close();
	}

}

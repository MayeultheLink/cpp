#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

public :

    ShrubberyCreationForm( void );
    ShrubberyCreationForm( const std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm & src );
    ShrubberyCreationForm & operator=( const ShrubberyCreationForm & rhs );
    virtual ~ShrubberyCreationForm( void );

    std::string const & getName( void ) const;
   	virtual void execute(Bureaucrat const & executor) const;

private :

    const std::string _target;

};

#endif
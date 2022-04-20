#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public :

    PresidentialPardonForm( void );
    PresidentialPardonForm( const std::string target );
    PresidentialPardonForm( const PresidentialPardonForm & src );
    PresidentialPardonForm & operator=( const PresidentialPardonForm & rhs );
    virtual ~PresidentialPardonForm( void );

    std::string const & getName( void ) const;
   	virtual void execute(Bureaucrat const & executor) const;

private :

    const std::string _target;

};

#endif
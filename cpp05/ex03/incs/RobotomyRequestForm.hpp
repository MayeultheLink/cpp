#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public :

    RobotomyRequestForm( void );
    RobotomyRequestForm( const std::string target );
    RobotomyRequestForm( const RobotomyRequestForm & src );
    RobotomyRequestForm & operator=( const RobotomyRequestForm & rhs );
    virtual ~RobotomyRequestForm( void );

    std::string const & getName( void ) const;
   	virtual void execute(Bureaucrat const & executor) const;

private :

    const std::string _target;

};

#endif
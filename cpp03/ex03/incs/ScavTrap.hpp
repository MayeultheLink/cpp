#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public :

	ScavTrap( void );
	ScavTrap( const std::string & name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	void attack( const std::string & target );
	void guardGate( void );

protected :

	void setEP( void );

};

#endif

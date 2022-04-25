#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public :

	DiamondTrap( void );
	DiamondTrap( const std::string & name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );

	void attack( const std::string & target );
	void whoAmI( void );

private :

	std::string name;

};

#endif

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {

public :

	ClapTrap( const std::string name );
	ClapTrap( const std::string name, int hitPoints, int energyPoints, int attackDamage );
	ClapTrap( ClapTrap const & src );
	ClapTrap & operator=( ClapTrap const & rhs );
	~ClapTrap( void );

	void attack(const std::string & target );
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected :

	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

	bool check( void ) const;

};

class ScavTrap : public ClapTrap {

public :

	ScavTrap( const std::string name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	void attack( const std::string & target );
	void guardGate( void );

};

#endif

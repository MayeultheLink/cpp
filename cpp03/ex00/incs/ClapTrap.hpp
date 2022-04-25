#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class	ClapTrap {

public :

	ClapTrap( void );
	ClapTrap( const std::string & name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	ClapTrap & operator=( ClapTrap const & rhs );

	void attack(const std::string & target );
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private :

	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

	bool check( void ) const;

};

#endif

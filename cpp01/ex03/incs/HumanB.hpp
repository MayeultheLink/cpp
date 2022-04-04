#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
	
public:

	HumanB ( std::string name );
	~HumanB ( void );

	void setWeapon( Weapon &weapon );
	void attack( void ) const;

private:

	std::string const name;
	Weapon *weapon;

};

#endif

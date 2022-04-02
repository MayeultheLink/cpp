#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
	
public:

	HumanA ( std::string str, const Weapon &weapon);
	~HumanA ( void );

	void	attack( void ) const;

private:

	const std::string name;
	const Weapon &weapon;

};

#endif

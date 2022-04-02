#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string n ) : name(n), weapon(NULL) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void HumanB::setWeapon( Weapon &weapon ) {

	this->weapon = &weapon;
	return;

}

void HumanB::attack( void ) const {

	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have any weapon !" << std::endl;
	return;

}

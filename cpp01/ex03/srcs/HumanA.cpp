#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string n, const Weapon &w ) : name(n), weapon(w) {

	return ;

}

HumanA::~HumanA( void ) {
	return ;
}

void	HumanA::attack( void ) const {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;

	return ;
}

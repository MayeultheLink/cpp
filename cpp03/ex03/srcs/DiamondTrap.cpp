#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default_clap_name"), name("default") {

	std::cout << "Default DiamondTrap constructor called" << std::endl;
	FragTrap::setHP();
	FragTrap::setAD();
	ScavTrap::setEP();

}

DiamondTrap::DiamondTrap( const std::string & name ) : ClapTrap(name + "_clap_name"), name(name) {

	std::cout << "DiamondTrap constructor called" << std::endl;
	FragTrap::setHP();
	FragTrap::setAD();
	ScavTrap::setEP();

}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;

}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap destructor called" << std::endl;

}

void DiamondTrap::attack( const std::string & target ) {

	this->ScavTrap::attack(target);

}

void DiamondTrap::whoAmI( void ) {

	std::cout << "Hi, I'm " << this->name << " and this is " << this->ClapTrap::name << std::endl;

}

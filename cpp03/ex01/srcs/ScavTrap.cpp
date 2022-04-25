#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("default", 100, 50, 20 ) {

	std::cout << "Default ScavTrap constructor called" << std::endl;

}

ScavTrap::ScavTrap( const std::string & name ) : ClapTrap(name, 100, 50, 20 ) {

	std::cout << "ScavTrap constructor called" << std::endl;

}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;

}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap destructor called" << std::endl;

}

void ScavTrap::attack( const std::string & target ) {

	if (!this->check())
		return;
	this->energyPoints -= 1;
	std::cout << this->name << " spends an energy point to attack " << target << ", causing " << this->attackDamage << " points of damage ! This is so much damage !! " << this->energyPoints << " energy points left for this incredibly strong player..." << std::endl;

}

void ScavTrap::guardGate( void ) {

	std::cout << this->name << " has entered the Gate keeper mode !" << std::endl;

}

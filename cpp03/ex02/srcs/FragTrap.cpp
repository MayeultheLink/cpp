#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string name ) : ClapTrap(name, 100, 100, 30 ) {

	std::cout << "FragTrap constructor called" << std::endl;

}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;

}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap destructor called" << std::endl;

}

void FragTrap::attack( const std::string & target ) {

	if (!this->check())
		return;
	this->energyPoints -= 1;
	std::cout << this->name << " spends an energy point to attack " << target << ", causing " << this->attackDamage << " points of damage ! Even more damage than the one before !!!! " << this->energyPoints << " energy points left for this invincible player..." << std::endl;

}

void FragTrap::highFivesGuys( void ) {

	std::cout << this->name << " asks if everything can be resolved with high fives..." << this->name << " is kind of pathetic to be honest." << std::endl;

}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string & name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {

	std::cout << "ClapTrap constructor called" << std::endl;

}

ClapTrap::ClapTrap( const std::string & name, int hitPoints, int energyPoints, int attackDamage ) : name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage) {

	std::cout << "ClapTrap constructor called" << std::endl;

}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;

}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap destructor called" << std::endl;

}

void ClapTrap::attack( const std::string & target ) {

	if (!this->check())
		return;
	this->energyPoints -= 1;
	std::cout << this->name << " spends an energy point to attack " << target << ", causing " << this->attackDamage << " points of damage ! " << this->energyPoints << " energy points left..." << std::endl;

}

void ClapTrap::takeDamage( unsigned int amount ) {

	this->hitPoints -= amount;
	std::cout << this->name << " takes " << amount << " of damage ! " << ((this->hitPoints >= 0) ? this->hitPoints : 0) << " hit points left..." << std::endl;

}

void ClapTrap::beRepaired( unsigned int amount ) {

	if (!this->check())
		return;
	this->energyPoints -= 1;
	this->hitPoints += amount;
	std::cout << this->name << " spends an energy point to heal ! " << this->hitPoints << " hit points left and " << this->energyPoints << " energy points left..." << std::endl;

}

bool ClapTrap::check( void ) const {

	if (this->hitPoints <= 0)
	{
		std::cout << "Come on, " << this->name << ", you can't attack people when you're dead..." << std::endl;
		return false;
	}
	if (!this->energyPoints)
	{
		std::cout << this->name << " don't have any energy points left to attack !" << std::endl;
		return false;
	}
	return true;

}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {

	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;

}

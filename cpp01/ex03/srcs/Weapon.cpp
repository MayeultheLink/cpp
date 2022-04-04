#include "Weapon.hpp"

Weapon::Weapon( std::string t ) : type(t)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const & Weapon::getType( void ) const {

	return ( this->type );

}

void	Weapon::setType( std::string str ) {

	this->type = str;
	return ;

}

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "The living dead " << this->name << " is now a dying dead..." << std::endl;
	return ;
}

void	Zombie::setName(std::string n)
{
	this->name = n;
	return ;
}

void	Zombie::announce() const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

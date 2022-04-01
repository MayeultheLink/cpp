#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "The living dead " << this->name << " is now a dying dead..." << std::endl;
	return;
}

void	Zombie::announce() const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

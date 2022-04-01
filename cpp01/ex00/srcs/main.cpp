#include "Zombie.hpp"

int	main()
{
	Zombie*	zombie;

	randomChump("gromero");
	zombie = newZombie("wcraven");
	zombie->announce();
	delete zombie;
	return 0;
}

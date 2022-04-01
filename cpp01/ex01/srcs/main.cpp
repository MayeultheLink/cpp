#include "Zombie.hpp"

int	main()
{
	Zombie*	zombies;

	int N = 6;
	
	zombies = zombieHorde(N, "The Cranberries");

	for (int i= 0; i < N; i++)
		zombies[i].announce();

	delete [] zombies;

	return 0;
}

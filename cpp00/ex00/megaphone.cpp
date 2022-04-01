#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac > 1)
		for (int x=1; x < ac; x++)
			for (size_t i=0; i < strlen(av[x]); i++)
				std::cout << (char)toupper(av[x][i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}

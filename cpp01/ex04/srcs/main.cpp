#include "MyReplace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
	{
		std::cout << "Invalid parameters." << std::endl;
		return 1;
	}

	MyReplace replace(av[1], av[2], av[3]);

	replace.replace();

	return 0;
}

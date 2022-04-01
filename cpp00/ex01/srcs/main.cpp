#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	repertoire;
	std::string buf;
	int	i = 0;

	while (1)
	{
		std::cout << "> ";
		std::getline (std::cin, buf);

		if (buf == "ADD")
		{
			repertoire.createContact(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (buf == "SEARCH")
			repertoire.searchContact();
		else if (buf == "EXIT")
			break;
	}
	return 0;
}

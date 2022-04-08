#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << std::endl << "// Hi ! I'm your phone book. You can type one of the following to use me. //" << std::endl
	<< std::endl << "==========================================="
	<< std::endl << "==           ADD to add a entry          =="
	<< std::endl << "==  SEARCH to get infos on your entries  =="
	<< std::endl << "==      EXIT to exit your phone book     =="
	<< std::endl << "===========================================" << std::endl << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << std::endl << "// Your phone book has been erased. Goodbye ! //" << std::endl << std::endl;
	return;
}

void	PhoneBook::createContact(int i)
{
	this->contacts[i].getInfo(i);
}

void	PhoneBook::searchContact(void) const
{
	if (!this->contacts[0].exists())
	{
		std::cout << std::endl << "// You didn't add any entry ! Please do before searching. //" << std::endl << std::endl;
		return;
	}

	this->printTab();

	std::cout << std::endl << "// Please enter the contact's index to get his informations. //" << std::endl << std::endl << "> ";
	std::string index;
	getline(std::cin, index);

	std::stringstream	ss;
	int	i = 0;
	ss << index;
	ss >> i;

	while (i < 1 || i > 8 || !this->contacts[i - 1].exists())
	{
		std::cout << std::endl << "// Your index is invalid ! Please try again. //" << std::endl << std::endl << "> ";
		std::string().swap(index);
		getline(std::cin, index);
		ss.clear();
		ss.str("");
		ss << index;
		ss >> i;
	}

	this->contacts[i - 1].printInfos();
}

void	PhoneBook::printTab(void) const
{
	int	i = 0;

	std::cout << std::endl << "===============================================" << std::endl;
	std::cout << "===============================================" << std::endl;
	while (i < 8 && this->contacts[i].exists())
	{
		this->contacts[i].printTabLine();
		i++;
	}
	std::cout << "===============================================" << std::endl;
	std::cout << "===============================================" << std::endl << std::endl;
}

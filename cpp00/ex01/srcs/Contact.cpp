#include "Contact.hpp"

Contact::Contact(void) : create(false)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

bool	my_isspace(char c)
{
	return ((std::isspace(c) != 0));
}

void	Contact::getInfo(int i)
{
	std::string	info = "";

	this->create = true;
	this->index = i + 1;

	std::cout << std::endl << "// New entry ! Please enter his or her informations. //" << std::endl << std::endl;
	while ((int)info.length() == count_if(info.begin(), info.end(), my_isspace))
	{
		std::cout << "First Name > ";
		std::getline (std::cin, info);
	}
	this->firstName = info;
	info = "";
	while ((int)info.length() == count_if(info.begin(), info.end(), my_isspace))
	{
		std::cout << "Last Name > ";
		std::getline (std::cin, info);
	}
	this->lastName = info;
	info = "";
	while ((int)info.length() == count_if(info.begin(), info.end(), my_isspace))
	{
		std::cout << "Nickname > ";
		std::getline (std::cin, info);
	}
	this->nickname = info;
	info = "";
	while ((int)info.length() == count_if(info.begin(), info.end(), my_isspace))
	{
		std::cout << "Phone Number > ";
		std::getline (std::cin, info);
	}
	this->phoneNumber = info;
	info = "";
	while ((int)info.length() == count_if(info.begin(), info.end(), my_isspace))
	{
		std::cout << "Darkest Secret > ";
		std::getline (std::cin, info);
	}
	this->darkestSecret = info;
	std::cout << std::endl << std::endl << "// Thank you ! The entry has been successfully created. //" << std::endl << std::endl;
}

void	Contact::printTabLine(void) const
{
	std::cout << "==         " << this->index << "|";
	this->printTabInfo(this->firstName);
	std::cout << "|";
	this->printTabInfo(this->lastName);
	std::cout << "|";
	this->printTabInfo(this->nickname);
	std::cout << "==" << std::endl;
}

void	Contact::printTabInfo(std::string str) const
{
	int	len;

	len = str.length();
	if (len == 10)
		std::cout << str;
	else if (len < 10)
	{
		len = 10 - len;
		while (len--)
			std::cout << " ";
		std::cout << str;
	}
	else if (len > 10)
	{
		len = -1;
		while (++len < 9)
			std::cout << str[len];
		std::cout << ".";
	}
}

void	Contact::printInfos(void) const
{
	std::cout << std::endl << "First Name > " << this->firstName << std::endl
	<< "Last Name > " << this->lastName << std::endl
	<< "Nickname > " << this->nickname << std::endl
	<< "Phone Number > " << this->phoneNumber << std::endl
	<< "Darkest Secret > " << this->darkestSecret << std::endl << std::endl;
}

bool	Contact::exists(void) const
{
	return (this->create);
}

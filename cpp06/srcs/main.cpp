#include "Conv.hpp"

int main(int ac, char **av)
{

	if (ac != 2)
		{std::cout << "Wrong number of arguments" << std::endl; return 0;}

	Conv value;

	try
		{value.analyseType(av[1]);}
	catch (std::exception & e)
		{std::cout << e.what() << std::endl;}

	try
		{value.getValues(av[1]);}
	catch (std::exception & e)
		{std::cout << e.what() << std::endl;}

	try
		{value.print();}
	catch (std::exception & e)
		{std::cout << e.what() << std::endl;}

	return 0;
}

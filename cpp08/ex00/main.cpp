#include "easyfind.hpp"
#include <vector>
#include <deque>

int main()
{
{
	std::deque<int> vect;

	for (int i=0; i < 10000; i++)
		vect.push_back(i);

	try
	{
		std::deque<int>::iterator it = easyfind(vect, 3674);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
		{std::cout << e.what() << std::endl;}
}
{
	std::vector<int> vect;

	for (int i=0; i < 10000; i++)
		vect.push_back(i);

	try
	{
		std::vector<int>::iterator it = easyfind(vect, 3674);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
		{std::cout << e.what() << std::endl;}
}

	return 0;
}

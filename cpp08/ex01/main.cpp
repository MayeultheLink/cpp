#include "Span.hpp"

int main()
{
{
	Span sp(4);

	try
	{
		for (int i=0; i < 10; i += 3)
			sp.addNumber(i);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}

{
Span sp(10000);
sp.randomGenerator();
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}

{
	try {
		std::vector<int> vect;
		for (int i=0; i < 100; i++)
			vect.push_back(i);
		Span sp(1000);
		sp.fillWithRange(vect.begin(), vect.end());
		sp.addNumber(1000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
		{std::cout << e.what() << std::endl;}
}

	return 0;
}

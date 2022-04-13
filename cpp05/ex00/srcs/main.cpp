#include "Bureaucrat.hpp"

int main()
{

{
	Bureaucrat a("joe", 2);
	Bureaucrat b;
	b = a;

	std::cout << b << std::endl;
}




{
std::cout << "instantiate grade 150 = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 150);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

{
std::cout << "instantiate grade 151 = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 151);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 0 = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 0);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 1 and increment = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 1);
		bureaucrat.increment();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 2 and increment = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 2);
		bureaucrat.increment();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 150 and decrement = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 150);
		bureaucrat.decrement();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 149 and decrement = ";
	try
	{
		Bureaucrat bureaucrat("mayeul", 149);
		bureaucrat.decrement();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}



	return 0;
}

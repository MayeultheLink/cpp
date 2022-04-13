#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

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

std::cout << std::endl << std::endl << std::endl;

{
std::cout << "instantiate form 150/1 = " << std::endl;
	try
	{
		Form a("laisser passer A38", 150, 1);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}


{
std::cout << "instantiate form 150/0 = " << std::endl;
	try
	{
		Form a("laisser passer A38", 150, 0);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}

{
std::cout << "instantiate form 151/1 = " << std::endl;
	try
	{
		Form a("laisser passer A38", 151, 1);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}

{
std::cout << "instantiate form 150/1 and bureaucrat 150 signs it= " << std::endl;
	try
	{
		Form a("laisser passer A38", 150, 1);
		std::cout << a << std::endl;
		Bureaucrat b("mayeul", 150);
		std::cout << b << std::endl;
		b.signForm(a);
		a.beSigned(b);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}

{
std::cout << "instantiate form 149/1 and bureaucrat 150 signs it= " << std::endl;
	try
	{
		Form a("laisser passer A38", 149, 1);
		std::cout << a << std::endl;
		Bureaucrat b("mayeul", 150);
		std::cout << b << std::endl;
		b.signForm(a);
		a.beSigned(b);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}


	return 0;
}

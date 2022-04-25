#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
/*
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

*/

{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 146);

std::cout << std::endl << "lvl 146 tries to sign and exe :" << std::endl;
try
{
	shrub->beSigned(executor);
	shrub->execute(executor);
}
catch (std::exception & e)
	{std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;}
delete shrub;
}



{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 146);

std::cout << std::endl << "lvl 146 increments and then tries to sign and exe :" << std::endl;
try
{
	executor.increment();
	shrub->beSigned(executor);
	shrub->execute(executor);
}
catch (std::exception & e)
	{std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;}
delete shrub;
}



{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 145);
Bureaucrat executor2("KingArthur", 137);

std::cout << std::endl << "lvl 137 tries to exe, then lvl 145 tries to sign and exe, then lvl 137 tries to exe :" << std::endl;

try
{
	shrub->execute(executor2);
	shrub->beSigned(executor);
	shrub->execute(executor);	
	shrub->execute(executor2);
}
catch (std::exception & e)
	{std::cout << shrub->getName() << " : " << e.what() << std::endl;}

	delete shrub;
}



{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 145);
Bureaucrat executor2("KingArthur", 137);

std::cout << std::endl << "lvl 145 tries to sign and exe, then lvl 137 tries to exe :" << std::endl;

try
{
	shrub->beSigned(executor);
	shrub->execute(executor);	
	shrub->execute(executor2);
}
catch (std::exception & e)
	{std::cout << executor.getName() << " : " << e.what() << shrub->getName() << std::endl;}

	delete shrub;
}




{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 145);
Bureaucrat executor2("KingArthur", 137);

std::cout << std::endl << "lvl 145 tries to sign, then lvl 137 tries to exe :" << std::endl;

try
{
	shrub->beSigned(executor);
	shrub->execute(executor2);
}
catch (std::exception & e)
	{std::cout << shrub->getName() << " : " << e.what() << std::endl;}


executor2.executeForm(*shrub);
std::cout << "But the Knights who say Ni are now the knights who say \"Ekke Ekke Ekke Ekke Ptang Zoo Boing\" and therefore no longer desire the shrubbery." << std::endl << "They left it in this folder." << std::endl;

	delete shrub;
}


{
Form* roboK = new RobotomyRequestForm("Agent K");
Form* roboH = new RobotomyRequestForm("Agent H");
Bureaucrat executor("Agent 2", 2);

std::cout << std::endl << "lvl 2 tries to sign and exe :" << std::endl;
try
{
	roboK->beSigned(executor);
	roboK->execute(executor);
}
catch (std::exception & e)
	{std::cout << executor.getName() << " : " << e.what() << roboK->getName() << std::endl;}

try
{
	roboH->beSigned(executor);
	roboH->execute(executor);
}
catch (std::exception & e)
	{std::cout << executor.getName() << " : " << e.what() << roboH->getName() << std::endl;}

delete roboK;
delete roboH;

}


{
Form* pardon = new PresidentialPardonForm("Ziltoid the Omniscient");
Bureaucrat executor("Captain Spectaculor", 2);

std::cout << std::endl << "lvl 2 tries to sign and exe :" << std::endl;
try
{
	pardon->beSigned(executor);
	pardon->execute(executor);
}
catch (std::exception & e)
	{std::cout << executor.getName() << " : " << e.what() << pardon->getName() << std::endl;}


delete pardon;
}


std::cout << std::endl << "intern creates form and lvl 1 signs and execute : " << std::endl;
Intern randomIntern;
Form *form;

form = randomIntern.makeForm("robotomy request", "Bender");
Bureaucrat executor("mayeul", 1);
try
{
	form->beSigned(executor);
	form->execute(executor);
}
catch (std::exception & e)
{
	std::cout << executor.getName() << " : " << e.what() << form->getName() << std::endl;
}

delete form;

	return 0;
}
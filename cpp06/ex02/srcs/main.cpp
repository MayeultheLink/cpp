#include "Base.hpp"
#include <iostream>

Base* generate( void ) {

	srand(time(NULL));
	int i = rand() % 3;

	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else if (i == 2)
		return new C;
	else
		return NULL;

}

void identify( Base* p ) {

	std::cout << "identify with pointer" << std::endl;
	A *a;
	if ((a = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;

}

void identify( Base& p ) {

	std::cout << "identify with reference" << std::endl;
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e)
	{(void)e;}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e)
	{(void)e;}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e)
	{(void)e;}

}

int main()
{
	Base* newBase = generate();

	identify(newBase);
	identify(*newBase);

	delete newBase;
	return 0;
}

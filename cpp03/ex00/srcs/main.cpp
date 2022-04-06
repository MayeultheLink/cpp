#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Aragorn");
	ClapTrap b("Sauron");

	b.attack("Aragorn");
	a.takeDamage(0);
	a.beRepaired(0);
	a.attack("Sauron");
	b.takeDamage(0);
	b.attack("Frodo");

	ClapTrap c(a);

	c.attack("Frodo");
	c.attack("Frodo");
	a.attack("Sauron");

	return 0;

}

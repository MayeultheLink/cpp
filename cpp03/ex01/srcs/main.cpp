#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Aragorn");
	ClapTrap b("Sauron");
	ScavTrap c("Frodo");
	
	c.attack("Aragorn");
	a.takeDamage(20);
	a.attack("Sauron");
	c.beRepaired(0);
	c.guardGate();

	ScavTrap d(c);

	return 0;

}

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap a("Aragorn");
	ClapTrap b("Sauron");
	ScavTrap c("Frodo");
	FragTrap d("Melkor");
	DiamondTrap e("TheRing");
	
	c.attack("Aragorn");
	d.attack("Aragorn");
	e.whoAmI();
	e.attack("mayeul");
	e.beRepaired(1);
	e.guardGate();

	return 0;

}

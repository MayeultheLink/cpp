#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap a("Aragorn");
	ClapTrap b("Sauron");
	ScavTrap c("Frodo");
	FragTrap d("Melkor");
	
	c.attack("Aragorn");
	d.attack("Aragorn");

//ScavTrap a("mayelu");
	return 0;

}

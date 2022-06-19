
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	a("Fragtrap");	
	ClapTrap	b("Ninja Assassin Claptrap");
	a.attack("Ninja Assassin Claptrap");
	b.takeDamage(0);
	b.beRepaired(10);
	return 0;
}
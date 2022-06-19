
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ScavTrap	a("Scavy");	
	FragTrap	b("Fragy");

	a.guardGate();
	a.attack("Fragy");
	a.beRepaired(10);
	b.highFiveGuys();
	b.attack("Scavy");
	b.highFiveGuys();
	return 0;
}

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	a("Scavy");	

	a.guardGate();
	a.attack("boop");
	a.beRepaired(10);
	return 0;
}
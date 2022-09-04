
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	a("Scavy");	
	ClapTrap	b("Clapy");
	ScavTrap	c = a;

	std::cout << "\033[0;34m" <<  a.getName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << "\033[0m" << std::endl;
	std::cout << "\033[0;34m" <<  b.getName() << " hitPoints:" << b.getHitPoints() << " energyPoints:" << b.getEnergyPoints() << " attackDamage:" << b.getAttackDamage() << "\033[0m" << std::endl;
	a.guardGate();
	a.attack("boop");
	a.beRepaired(10);
	a.takeDamage(150);
	a.attack("beep");
	std::cout << "\033[0;34m" <<  a.getName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << "\033[0m" << std::endl;
	std::cout << "\033[0;34m" <<  c.getName() << " hitPoints:" << c.getHitPoints() << " energyPoints:" << c.getEnergyPoints() << " attackDamage:" << c.getAttackDamage() << "\033[0m" << std::endl;
	return 0;
}


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ScavTrap	a("Scavy");	
	FragTrap	b("Fragy");
	FragTrap	c = b;

	std::cout << "\033[0;34m" <<  a.getName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << "\033[0m" << std::endl;
	std::cout << "\033[0;34m" <<  b.getName() << " hitPoints:" << b.getHitPoints() << " energyPoints:" << b.getEnergyPoints() << " attackDamage:" << b.getAttackDamage() << "\033[0m" << std::endl;
	a.guardGate();
	a.attack("Fragy");
	a.beRepaired(10);
	b.highFiveGuys();
	b.attack("Scavy");
	b.highFiveGuys();
	a.takeDamage(150);
	b.takeDamage(150);
	a.attack("Fragy");
	b.attack("Scavy");
	std::cout << "\033[0;34m" <<  a.getName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << "\033[0m" << std::endl;
	std::cout << "\033[0;34m" <<  b.getName() << " hitPoints:" << b.getHitPoints() << " energyPoints:" << b.getEnergyPoints() << " attackDamage:" << b.getAttackDamage() << "\033[0m" << std::endl;
	std::cout << "\033[0;34m" <<  c.getName() << " hitPoints:" << c.getHitPoints() << " energyPoints:" << c.getEnergyPoints() << " attackDamage:" << c.getAttackDamage() << "\033[0m" << std::endl;
	return 0;
}

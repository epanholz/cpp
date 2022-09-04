
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	a("Clapy");	
	ClapTrap	b("Ninja");

	std::cout << "\033[0;34m" <<  a.getName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << std::endl;
	std::cout << b.getName() << " hitPoints:" << b.getHitPoints() << " energyPoints:" << b.getEnergyPoints() << " attackDamage:" << b.getAttackDamage() << "\033[0m" << std::endl;
	a.attack("Boop");
	a.takeDamage(20);
	a.attack("Beep");
	b.takeDamage(2);
	b.beRepaired(10);
	std::cout << "\033[0;34m" <<  a.getName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << std::endl;
	std::cout << b.getName() << " hitPoints:" << b.getHitPoints() << " energyPoints:" << b.getEnergyPoints() << " attackDamage:" << b.getAttackDamage() << "\033[0m" << std::endl;
	return 0;
}

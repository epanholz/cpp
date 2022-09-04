
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	a("Dany");

	std::cout << "\033[0;34m" <<  a.getDiamondName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << "\033[0m" << std::endl;
	a.whoAmI();
	a.attack("mlem");
	a.takeDamage(50);
	a.guardGate();
	a.takeDamage(50);
	a.attack("boop");
	std::cout << "\033[0;34m" <<  a.getDiamondName() << " hitPoints:" << a.getHitPoints() << " energyPoints:" << a.getEnergyPoints() << " attackDamage:" << a.getAttackDamage() << "\033[0m" << std::endl;
	return 0;
}

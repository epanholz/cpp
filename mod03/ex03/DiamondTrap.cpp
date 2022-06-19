
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called OwO" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
	this->name = name;
	this->hit_points = DiamondTrap::FragTrap::hit_points;
	this->energy_points = DiamondTrap::ScavTrap::energy_points;
	this->attack_damage = DiamondTrap::FragTrap::attack_damage;
	std::cout << "DiamondTrap name constructor called OwO" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap deconstructor called OwO" << std::endl;
}

/* member functions */

void	DiamondTrap::whoAmI(){
	std::cout << "\033[0;36m" << "My name is " << this->name << "\033[0m" << std::endl;
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default constructor called :x" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap name constructor called :x" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap deconstructor called :x" << std::endl;
}

/* member functions */

void	ScavTrap::attack(const std::string& target){
	std::cout << "\033[0;36m" << "Viscious " << this->name << " attacks " << target << " for " << this->attack_damage << "\033[0m" << std::endl;
	this->energy_points--;
}

void	ScavTrap::guardGate(){
	std::cout << "\033[0;36m" << "ScavTrap " << this->name << " is now in Gate keeper mode OwO" << "\033[0m" << std::endl;
}
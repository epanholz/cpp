
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called OwO" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name), FragTrap(name), ScavTrap(name), name(name) {
	ClapTrap::name = name+"_clap_name";
	this->hit_points = DiamondTrap::FragTrap::hit_points;
	this->energy_points = DiamondTrap::ScavTrap::energy_points;
	this->attack_damage = DiamondTrap::FragTrap::attack_damage;
	std::cout << "DiamondTrap name constructor called OwO" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old_obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap deconstructor called OwO" << std::endl;
}

/* member functions */

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << "\033[0;36m" << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << "\033[0m" << std::endl;
}
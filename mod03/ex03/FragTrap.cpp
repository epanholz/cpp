
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap default constructor called ^-^" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap name constructor called ^-^" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructor called ^-^" << std::endl;
}

/* member functions */

void	FragTrap::highFiveGuys(){
	std::cout << "\033[0;36m" << this->name << " requested a high five UwU" << "\033[0m" << std::endl;
}
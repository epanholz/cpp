
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

FragTrap::FragTrap(const FragTrap &old_obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructor called ^-^" << std::endl;
}

/* member functions */

void	FragTrap::highFiveGuys(){
	std::cout << "\033[0;36m" << this->name << " requested a high five UwU" << "\033[0m" << std::endl;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap default constructor called :3" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap name constructor called :3" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->name = old_obj.name;
	this->hit_points = old_obj.hit_points;
	this->energy_points = old_obj.energy_points;
	this->attack_damage = old_obj.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor called :3" << std::endl;
}

/* member functinos */

void	ClapTrap::attack(const std::string& target){
	std::cout << "\033[0;35m" << "Lame " << this->name << " attacks " << target << " for " << this->attack_damage << "\033[0m" << std::endl;
	this->energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "\033[0;35m" << this->name << " took " << amount << " damage :c" << "\033[0m" << std::endl;
	this->hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "\033[0;35m" << this->name << " healed himself for " << amount << " :D" << "\033[0m" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
}
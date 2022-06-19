
#include "ClapTrap.hpp"

/* constructors and decosunstructors */

ClapTrap::ClapTrap()
	: hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap default constructor called :3" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap name constructor called :3" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor called :3" << std::endl;
}

/* member functinos */

void	ClapTrap::attack(const std::string& target){
	std::cout << "\033[0;36m" << "Lame " << this->name << " attacks " << target << " for " << this->attack_damage << "\033[0m" << std::endl;
	this->energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "\033[0;36m" << this->name << " took " << amount << " damage :c" << "\033[0m" << std::endl;
	this->hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "\033[0;36m" << this->name << " healed himself for " << amount << " :D" << "\033[0m" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
}
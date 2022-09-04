#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called ^-^" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap name constructor called ^-^" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old_obj){
	std::cout << "FragTrap Copy constructor called :D" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap &old_obj){
	std::cout << "FragTrap Copy assignment operator called ^-^" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructor called ^-^" << std::endl;
}

/* member functions */

void	FragTrap::highFiveGuys(){
	std::cout << "\033[0;35m" << this->_name << " requested a high five UwU" << "\033[0m" << std::endl;
}

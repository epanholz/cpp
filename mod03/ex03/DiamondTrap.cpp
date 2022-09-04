
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called OwO" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name) {
	ClapTrap::_name = name+"_clap_name";
	this->_hitPoints = DiamondTrap::FragTrap::_hitPoints;
	this->_energyPoints = DiamondTrap::ScavTrap::_energyPoints;
	this->_attackDamage = DiamondTrap::FragTrap::_attackDamage;
	std::cout << "DiamondTrap name constructor called OwO" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old_obj){
	std::cout << "DiamondTrap Copy constructor called :D" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &old_obj){
	std::cout << "DiamondTrap Copy assignment operator called ^-^" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
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
	std::cout << "\033[0;35m" << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << "\033[0m" << std::endl;
}

/* getter */

std::string DiamondTrap::getDiamondName() const {
	return (this->_name);
}

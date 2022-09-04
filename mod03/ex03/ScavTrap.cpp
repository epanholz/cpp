
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called :x" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap name constructor called :x" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj){
	std::cout << "ScavTrap Copy constructor called :D" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &old_obj){
	std::cout << "ScavTrap Copy assignment operator called ^-^" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap deconstructor called :x" << std::endl;
}

/* member functions */

void	ScavTrap::attack(const std::string& target){
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "\033[0;35m" << this->_name << " has no energyPoints or hitPoints left and can't attack :c" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[0;35m" << "Viscious " << this->_name << " attacks " << target << " for " << this->_attackDamage << "\033[0m" << std::endl;
	this->_energyPoints = (this->_energyPoints == 0) ? 0 : this->_energyPoints - 1;
}

void	ScavTrap::guardGate(){
	std::cout << "\033[0;35m" << this->_name << " is now in Gate keeper mode OwO" << "\033[0m" << std::endl;
}

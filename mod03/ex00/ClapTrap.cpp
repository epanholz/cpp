
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called :3" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap name constructor called :3" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj) 
	: _name(old_obj._name), _hitPoints(old_obj._hitPoints), _energyPoints(old_obj._energyPoints), _attackDamage(old_obj._attackDamage) {
	std::cout << "Copy constructor called :D" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->_name = old_obj._name;
	this->_hitPoints = old_obj._hitPoints;
	this->_energyPoints = old_obj._energyPoints;
	this->_attackDamage = old_obj._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor called :3" << std::endl;
}

/* member functinos */

void	ClapTrap::attack(const std::string& target){
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "\033[0;35m" << this->_name << " has no energyPoints or hitPoints left and can't attack :c" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[0;35m" << this->_name << " attacks " << target << " for " << this->_attackDamage << " *slash*" << "\033[0m" << std::endl;
	this->_energyPoints = (this->_energyPoints == 0) ? 0 : this->_energyPoints - 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "\033[0;35m" << this->_name << " took " << amount << " damage :c" << "\033[0m" << std::endl;
	this->_hitPoints = amount >= this->_hitPoints ? 0 : this->_hitPoints - amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "\033[0;35m" << this->_name << " has no energyPoints or hitPoints left and can't heal himself :c" << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[0;35m" << this->_name << " healed himself for " << amount << " :D" << "\033[0m" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints = (this->_energyPoints == 0) ? 0 : this->_energyPoints - 1;
}

/* getters */

std::string 	ClapTrap::getName() const {
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints() const {
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints () const {
	return (this->_energyPoints);
}

unsigned int 	ClapTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

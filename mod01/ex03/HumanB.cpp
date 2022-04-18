
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB() {
	std::cout << this->_name << " has died!" << std::endl;
}


void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
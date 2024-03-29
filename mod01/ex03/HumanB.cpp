
#include "HumanB.hpp"

/* constructors and deconstructors */

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB() {
	std::cout << this->_name << " has died!" << std::endl;
}

/* member functions */

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) {
	if (!this->_weapon)
		std::cout << this->_name << " has no weapon" << std::endl;
	else 
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

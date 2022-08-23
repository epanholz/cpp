
#include "HumanA.hpp"

/* constructors and deconstructors */

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon) {}

HumanA::~HumanA( void ) {
	std::cout << this->_name << " had died!" << std::endl;
}

/* member functions */

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

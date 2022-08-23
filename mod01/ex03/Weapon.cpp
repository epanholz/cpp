
#include "Weapon.hpp"

/* constructors and deconstructors */

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
	: _type (type) {}

Weapon::~Weapon(){}

/* getter and setter */

const std::string&	Weapon::getType (void) const{
	return(Weapon::_type);
}

void	Weapon::setType (std::string type){
	Weapon::_type = type;
}

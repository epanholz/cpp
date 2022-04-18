
#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	Weapon::_type = type;
};

Weapon::~Weapon(){};

const std::string&	Weapon::getType (void) const{
	return(Weapon::_type);
}

void	Weapon::setType (std::string type){
	Weapon::_type = type;
}
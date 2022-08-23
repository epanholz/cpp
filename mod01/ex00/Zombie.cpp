
#include "Zombie.hpp"

/* constructors and deconstructors */

Zombie::Zombie(std::string name)
	: _name(name) {}

Zombie::~Zombie() {
	std::cout << Zombie::_name << " has died." << std::endl;
}

/* member functions  */

void	Zombie::announce( void) {
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

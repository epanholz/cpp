#include "Zombie.hpp"

/* constructors and deconstructors */

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << Zombie::_name << " has died." << std::endl;
}

/* member functions */

void	Zombie::announce( void) {
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	Zombie::_name = name;
}

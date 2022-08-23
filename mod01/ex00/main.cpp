
#include "Zombie.hpp"

int main(void) {
	Zombie *zombie;

	zombie = newZombie("zino");
	zombie->announce();
	delete zombie;
	randomChump("panini");
}

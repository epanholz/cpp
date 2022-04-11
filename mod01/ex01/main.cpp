#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = zombieHorde(5, "zino");
	delete[] zombie;
}

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	// allocating dynamic array of Size N using new keyword
	Zombie *zombie = new Zombie[N];
 
    // setting the name for all the Zombies
    for (int i = 0; i < N; i++) {
        zombie[i].set_name(name);
		//zombie[i].announce();
    }
	return(zombie);
}

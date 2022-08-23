
#pragma once

# include <iostream>
# include <fstream>
# include <string>

class Zombie {

	public: /* constructors and deconstructors */
		Zombie(std::string name);
		~Zombie();

	public: /* member functions */
		void announce( void );

	private: /* attributes */
		std::string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

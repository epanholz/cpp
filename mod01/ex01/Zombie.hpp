
#pragma once

# include <iostream>
# include <fstream>
# include <string>

class Zombie {

	public: /* constructors and deconstructors */
		Zombie();
		~Zombie();

	public: /* member functions */
		void announce( void );
		void set_name(std::string name);

	private: /* attributes */
		std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

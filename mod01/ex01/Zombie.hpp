
#pragma once

# include <iostream>
# include <fstream>
# include <string>

class Zombie {

public:

	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce( void );
	void set_name(std::string name);

private:

	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );
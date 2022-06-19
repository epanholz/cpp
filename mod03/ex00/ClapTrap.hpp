# pragma once

# include <iostream>
# include <fstream>
# include <string>

class ClapTrap {

public: /* constructors and deconstructors */
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

public: /* member functions */
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private: /* variables */
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
};
# pragma once

# include <iostream>
# include <fstream>
# include <string>

class ClapTrap {

public: /* constructors and deconstructors */
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &old_obj);
	ClapTrap& operator=(const ClapTrap &old_obj);
	virtual ~ClapTrap();

public: /* member functions */
	virtual void	attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected: /* variables */
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;

};
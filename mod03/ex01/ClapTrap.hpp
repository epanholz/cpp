# pragma once

# include <iostream>
# include <fstream>
# include <string>

class ClapTrap {

public: /* constructors and deconstructors */
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &old_obj);
	virtual ~ClapTrap();

public: /* copy assignment operator overload */
	ClapTrap& operator=(const ClapTrap &old_obj);

public: /* member functions */
	virtual void	attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

public: /* getters for testing */
	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;

protected: /* variables */
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

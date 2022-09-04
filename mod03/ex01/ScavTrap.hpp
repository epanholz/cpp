
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public: /* constructors and deconstructors */
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &old_obj);
	~ScavTrap();

public: /* copy assignment operator overload */
	ScavTrap& operator=(const ScavTrap &old_obj);

public: /* member functions */
	void	attack(const std::string& target);
	void	guardGate();

};

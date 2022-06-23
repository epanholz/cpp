
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public: /* constructors and deconstructors */
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &old_obj);
	ScavTrap& operator=(const ScavTrap &old_obj);
	virtual ~ScavTrap();

public: /* member functions */
	virtual void	attack(const std::string& target);
	void			guardGate();

private: /* variables */

};
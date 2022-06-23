
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public: /* constructors and deconstructors */
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &old_obj);
	DiamondTrap& operator=(const DiamondTrap &old_obj);
	virtual ~DiamondTrap();

public: /* member functions */
	virtual void	attack(const std::string& target);
	void			whoAmI();

private: /* variables */
	std::string name;

};





#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public: /* constructors and deconstructors */
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();

public: /* member functions */
	void	whoAmI();

private: /* variables */
	std::string name;

};




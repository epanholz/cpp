
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public: /* constructors and deconstructors */
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();

public: /* member functions */
	void	attack(const std::string& target);
	void	guardGate();

private: /* variables */

};
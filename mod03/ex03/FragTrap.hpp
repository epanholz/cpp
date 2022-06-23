
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public: /* constructors and deconstructors */
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &old_obj);
	FragTrap& operator=(const FragTrap &old_obj);
	virtual ~FragTrap();

public: /* member functions */
	void	highFiveGuys();

private: /* variables */

};
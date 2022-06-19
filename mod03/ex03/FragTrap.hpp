
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public: /* constructors and deconstructors */
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();

public: /* member functions */
	void	highFiveGuys();

private: /* variables */

};
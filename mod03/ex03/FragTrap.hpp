
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public: /* constructors and deconstructors */
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &old_obj);
	virtual ~FragTrap();

public: /* copy assignment operator overload */
	FragTrap& operator=(const FragTrap &old_obj);

public: /* member functions */
	void	highFiveGuys();

};

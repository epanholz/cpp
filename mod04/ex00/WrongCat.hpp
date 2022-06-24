
# pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public: /* constructors and deconstructors */
	WrongCat();
	WrongCat(const WrongCat &old_obj);
	WrongCat& operator=(const WrongCat &old_obj);
	virtual ~WrongCat();

public: /* member functions */
	void	makeSound() const;

private: /* variables */

};
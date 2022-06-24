
# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public: /* constructors and deconstructors */
	Cat();
	Cat(const Cat &old_obj);
	Cat& operator=(const Cat &old_obj);
	virtual ~Cat();

public: /* member functions */
	void	makeSound() const;

private: /* attributes */
	Brain*	brain;

};
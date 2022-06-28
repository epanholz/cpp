
# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public: /* constructors and deconstructors */
	Dog();
	Dog(const Dog &old_obj);
	Dog& operator=(const Dog &old_obj);
	virtual ~Dog();

public: /* member functions */
	void	makeSound() const;

private: /* attributes */
	Brain*	brain;

};
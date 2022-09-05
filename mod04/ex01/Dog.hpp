
# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public: /* constructors and deconstructors */
		Dog();
		Dog(const Dog &old_obj);
		virtual ~Dog();

	public: /* copy assignment operator overload */
		Dog& operator=(const Dog &old_obj);

	public: /* member functions */
		void	makeSound() const;

	private: /* attributes */
		Brain*	brain;

};

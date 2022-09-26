
# pragma once

#include "Animal.hpp"

class Dog : public Animal {

	public: /* constructors and deconstructors */
		Dog();
		Dog(const Dog &rhs);
		virtual ~Dog();

	public: /* copy assignment operator overload */
		Dog& operator=(const Dog &rhs);
		
	public: /* member functions */
		void	makeSound() const;

	private: /* variables */

};

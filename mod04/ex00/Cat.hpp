
# pragma once

#include "Animal.hpp"

class Cat : public Animal {

	public: /* constructors and deconstructors */
		Cat();
		Cat(const Cat &rhs);
		virtual ~Cat();

	public: /* copy assignment operator overload */
		Cat& operator=(const Cat &rhs);
		
	public: /* member functions */
		void	makeSound() const;

};

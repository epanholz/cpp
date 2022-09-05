
# pragma once

#include "Animal.hpp"

class Cat : public Animal {

	public: /* constructors and deconstructors */
		Cat();
		Cat(const Cat &old_obj);
		virtual ~Cat();

	public: /* copy assignment operator overload */
		Cat& operator=(const Cat &old_obj);
		
	public: /* member functions */
		void	makeSound() const;

};

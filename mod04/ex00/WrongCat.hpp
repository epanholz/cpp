
# pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public: /* constructors and deconstructors */
		WrongCat();
		WrongCat(const WrongCat &old_obj);
		virtual ~WrongCat();

	public: /* copy assignment operator overload */
		WrongCat& operator=(const WrongCat &old_obj);
		
	public: /* member functions */
		void	makeSound() const;

};

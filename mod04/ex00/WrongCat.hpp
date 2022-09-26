
# pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public: /* constructors and deconstructors */
		WrongCat();
		WrongCat(const WrongCat &rhs);
		virtual ~WrongCat();

	public: /* copy assignment operator overload */
		WrongCat& operator=(const WrongCat &rhs);
		
	public: /* member functions */
		void	makeSound() const;

};

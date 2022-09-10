
# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public: /* constructors and deconstructors */
		Cat();
		Cat(const Cat &rhs);
		virtual ~Cat();

	public: /* copy assignment operator overload */
		Cat& operator=(const Cat &rhs);

	public: /* member functions */
		void			makeSound() const;

	public: /* getter and setter for testing */
		void			setIdea(int index, std::string idea);
		std::string		getIdea(int index) const;

	private: /* attributes */
		Brain*	brain;

};

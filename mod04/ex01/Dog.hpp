
# pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public: /* constructors and deconstructors */
		Dog();
		Dog(const Dog &rhs);
		virtual ~Dog();

	public: /* copy assignment operator overload */
		Dog& operator=(const Dog &rhs);

	public: /* member functions */
		void	makeSound() const;

	public: /* getter and setter for testing */
		void			setIdea(int index, std::string idea);
		std::string		getIdea(int index) const;

	private: /* attributes */
		Brain*	brain;

};

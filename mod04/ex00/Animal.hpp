
# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Animal {

	public: /* constructors and deconstructors */
		Animal();
		Animal(std::string name);
		Animal(const Animal &rhs);
		virtual ~Animal();

	public: /* copy assignment operator overload */
		Animal& operator=(const Animal &rhs);
		
	public: /* getter and setter */
		std::string		getType() const;

	public: /* member functions */
		virtual void	makeSound() const;

	protected: /* attributes */
		std::string type;

};

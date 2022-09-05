# pragma once

# include <iostream>
# include <fstream>
# include <string>

class WrongAnimal {

	public: /* constructors and deconstructors */
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &old_obj);
		virtual ~WrongAnimal();

	public: /* copy assignment operator overload */
		WrongAnimal& operator=(const WrongAnimal &old_obj);
		
	public: /* getter and setter */
		std::string		getType() const;

	public: /* member functions */
		void	makeSound() const;

	protected: /* attributes */
		std::string type;

};

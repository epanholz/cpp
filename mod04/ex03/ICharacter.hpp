
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include "AMateria.hpp"

class AMateria;

class ICharacter {
	public: /* deconstructors */
		virtual ~ICharacter();

	public: /* getter and setter */
		virtual std::string const & getName() const = 0;

	public: /* member functions */
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};
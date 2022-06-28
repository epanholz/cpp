
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include "ICharacter.hpp"

class AMateria {

	public: /* constructors and deconstructors */
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &old_obj);
		virtual ~AMateria();
	
	public: /* copy assignment operator overload */
		AMateria& operator=(const AMateria &old_obj);

	public: /* getter and setter */
		std::string const &getType() const; // returns the materia type

	public: /* member functions */
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected: /* attributes */
		std::string type;

};
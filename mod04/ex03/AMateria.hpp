
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public: /* constructors and deconstructors */
		AMateria(std::string const &type);
		AMateria(const AMateria &rhs);
		virtual ~AMateria();
	
	private: /* constructor to make sure we always use the other one */
		AMateria();
	
	public: /* copy assignment operator overload */
		AMateria& operator=(const AMateria &rhs);

	public: /* getter and setter */
		std::string const &getType() const; // returns the materia type

	public: /* member functions */
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected: /* attributes */
		std::string type;

};

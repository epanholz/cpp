
# pragma once

#include "AMateria.hpp"

class Ice : public AMateria {

	public: /* constructors and deconstructors */
		Ice();
		Ice(const Ice &old_obj);
		virtual ~Ice();

	public: /* copy assignment operator overload */
		Ice& operator=(const Ice &old_obj);

	public: /* getter and setter */

	public: /* member functions */
		AMateria* clone() const;
		void use(ICharacter& target);

	protected: /* attributes */

};
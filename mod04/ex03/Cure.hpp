
# pragma once

#include "AMateria.hpp"

class Cure : public AMateria {

	public: /* constructors and deconstructors */
		Cure();
		Cure(const Cure &rhs);
		virtual ~Cure();

	public: /* copy assignment operator overload */
		Cure& operator=(const Cure &rhs);

	public: /* getter and setter */

	public: /* member functions */
		AMateria* clone() const;
		void use(ICharacter& target);

	protected: /* attributes */

};

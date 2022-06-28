
# pragma once

#include "AMateria.hpp"

class Cure : public AMateria {

	public: /* constructors and deconstructors */
		Cure();
		Cure(const Cure &old_obj);
		virtual ~Cure();

	public: /* copy assignment operator overload */
		Cure& operator=(const Cure &old_obj);

	public: /* getter and setter */

	public: /* member functions */
		AMateria* clone() const;
		void use(ICharacter& target);

	protected: /* attributes */

};
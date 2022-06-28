
# pragma once 

# include <iostream>
# include <fstream>
# include <string>
# include "AMateria.hpp"

class IMateriaSource {

	public: /* constructors and deconstructors */
		IMateriaSource();
		IMateriaSource(const IMateriaSource &old_obj);
		virtual ~IMateriaSource();

	public: /* copy assignment operator overload */
		IMateriaSource& operator=(const IMateriaSource &old_obj);

	public: /* getter and setter */

	public: /* member functions */
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

	protected: /* attributes */

};
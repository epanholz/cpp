
# pragma once 

#include <iostream>
#include <fstream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource {

	public: /* deconstructors */
		virtual ~IMateriaSource();

	public: /* member functions */
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public: /* constructors and deconstructors */
        MateriaSource();
        MateriaSource(const MateriaSource &rhs);
        virtual ~MateriaSource();

    public: /* copy assignment operator overload */
        MateriaSource& operator=(const MateriaSource &rhs);

    public: /* getter and setter */

    public: /* member functions */
        void        learnMateria(AMateria* materia);
        AMateria*   createMateria(std::string const & type);

    private: /* attributes */
        AMateria*   _materia[4];

};

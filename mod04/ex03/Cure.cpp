
#include "Cure.hpp"

/* constructors and deconstructors */

Cure::Cure() 
    : AMateria("cure") {}

Cure::Cure(const Cure &rhs) 
    : AMateria(rhs) {}

Cure::~Cure() {}

/* copy assignment operator overload */

Cure& Cure::operator=(const Cure &rhs) {
    if (this == &rhs)
       return (*this);
    this->type = rhs.type;
    return (*this);
}

/* member functions */

AMateria* Cure::clone() const {
    AMateria* tmp = new Cure();
    return (tmp);
}

void    Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

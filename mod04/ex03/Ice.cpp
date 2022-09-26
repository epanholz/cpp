
#include "Ice.hpp"

/* constructors and deconstructors */

Ice::Ice() 
    : AMateria("ice") {}

Ice::Ice(const Ice &rhs) 
    : AMateria(rhs) {}

Ice::~Ice() {}

/* copy assignment operator overload */

Ice& Ice::operator=(const Ice &rhs) {
    if (this == &rhs)
       return (*this);
    this->type = rhs.type;
    return (*this);
}

AMateria* Ice::clone() const {
    AMateria* tmp = new Ice();
    return (tmp);
}

void    Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

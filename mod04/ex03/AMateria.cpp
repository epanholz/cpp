
#include "AMateria.hpp"

/* constructors and deconstructors */

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type)
    : type(type) {}

AMateria::AMateria(const AMateria &rhs) 
    : type(rhs.type) {}

AMateria::~AMateria() {}

/* copy assignment operator overload */

AMateria& AMateria::operator=(const AMateria &rhs) {
    this->type = rhs.type;
    return (*this);
}

/* getter and setter */

std::string const &AMateria::getType() const {
    return (this->type);
}


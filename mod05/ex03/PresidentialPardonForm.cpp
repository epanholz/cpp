
#include "PresidentialPardonForm.hpp"

/* constructors */

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    : AForm("Presidential Pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) 
    : AForm(rhs) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

/* copy assignment operator overload */

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    AForm::operator=(rhs);
    return (*this);
}

/* member functions */

void    PresidentialPardonForm::executeForm() const {
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

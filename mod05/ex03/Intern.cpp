
#include "Intern.hpp"

/* constructors */

Intern::Intern() {}

Intern::Intern(const Intern &) {}

Intern::~Intern() {}

/* copy assignment operator overload */

Intern& Intern::operator=(const Intern &) {
    return (*this);
}

/* lookup Table */

const internTable Intern::lookupTable[] = {
    {"robotomy request", &Intern::makeRobtomy },
    {"presidential pardon", &Intern::makePardon },
    {"shrubbery creation", &Intern::makeShrubbery }
};

/* member functions */

AForm* Intern::makeRobtomy(std::string target) {
    AForm* ret = new RobotomyRequestForm(target);
    return (ret);
}

AForm*  Intern::makePardon(std::string target) {
    AForm* ret = new PresidentialPardonForm(target);
    return (ret);
}

AForm* Intern::makeShrubbery(std::string target) {
    AForm* ret = new ShrubberyCreationForm(target);
    return (ret);
}

AForm*  Intern::makeForm(std::string name, std::string target) {
    for(int i = 0; i < 3; i++) {
        if (this->lookupTable[i].name == name) {
            AForm* ret = (this->*lookupTable[i].pfun)(target);
            std::cout << "Intern creates new " << ret->getName() << " form" << std::endl;
            return (ret);
        }
    }
    std::cout << "Invalid Form name" << std::endl;
    return (NULL);
}

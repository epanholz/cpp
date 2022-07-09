
#pragma once

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class Intern;

struct internTable {
    std::string     name;
    AForm*          (Intern::*pfun)(std::string target);
};

class Intern {

    public: /* constructors and deconstructors */
        Intern();
        Intern(const Intern &);
        virtual ~Intern();

    public: /* copy assignment operator overload */
        Intern& operator=(const Intern &);

    public: /* member functions */
        AForm*  makeRobtomy(std::string target);
        AForm*  makePardon(std::string target);
        AForm*  makeShrubbery(std::string target);
        AForm*  makeForm(std::string name, std::string target);
    
    private: /* lookup table */
        const static internTable     lookupTable[3];
    
};

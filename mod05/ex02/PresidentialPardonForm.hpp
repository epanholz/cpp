
#pragma once 

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    public: /* constructors and deconstructors */
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &rhs);
        virtual ~PresidentialPardonForm();

    public: /* copy assignment operator overload */
        PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

    public: /* member functions */
        void    executeForm() const;

};
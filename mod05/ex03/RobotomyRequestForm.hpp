
# pragma once

#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    public: /* constructors and deconstructors */
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &rhs);
        virtual ~RobotomyRequestForm();

    public: /* copy assignment operator overload */
        RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);

    public: /* member functions */
        void    executeForm() const;

};

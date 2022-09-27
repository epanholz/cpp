
#include "RobotomyRequestForm.hpp"

/* constructors */

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : AForm("Robotomy", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) 
    : AForm(rhs) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

/* copy assignment operator overload */

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    AForm::operator=(rhs);
    return (*this);
}

/* member functions */

void    RobotomyRequestForm::executeForm() const {
    srand((unsigned int)time(NULL));
    int i = rand() % 100;
    std::cout << "* drilling noises *" << std::endl;
    if (i > 50)
        std::cout << this->getTarget() << " has been robotomized [ -c°▥°]-c " << std::endl;
    else 
        std::cout << "robotomy has failed" << std::endl;
}

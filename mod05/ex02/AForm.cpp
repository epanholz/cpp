
#include "AForm.hpp"

/* constructors and deconstructors */

AForm::AForm()
    : _name("meta"), _sign(false) , _grade_sign(1), _grade_exec(1) {}

AForm::AForm(const std::string name, const std::string target, int grade_sign, int grade_exec)
    : _name(name), _target(target), _sign(false) , _grade_sign(grade_sign), _grade_exec(grade_exec) {
            if (grade_sign < 1 || grade_exec < 1)
                throw GradeTooHighException();
            if (grade_sign > 150 || grade_exec > 150)
                throw GradeTooLowException();
    }

AForm::AForm(const AForm &rhs)
    : _name(rhs._name), _target(rhs._target), _sign(rhs._sign) , _grade_sign(rhs._grade_sign), _grade_exec(rhs._grade_exec) {}

AForm::~AForm() {}

/* copy assignment operator overload */

AForm& AForm::operator=(const AForm &rhs) {
    if (this == &rhs)
       return (*this);
    this->_sign = rhs._sign;
    return (*this);
}

/* getter and setter */

const std::string   &AForm::getName() const {
    return (this->_name);
}

const std::string   &AForm::getTarget() const {
    return (this->_target);
}

const bool          &AForm::getSign() const {
    return (this->_sign);
}

const int           &AForm::getGradeSign() const {
    return (this->_grade_sign);
}

const int           &AForm::getGradeExec() const {
    return (this->_grade_exec);
}

void        AForm::setSign(bool rhs) {
    this->_sign = rhs;
}

/* member functions */

void    AForm::beSigned(Bureaucrat& rhs) {
    if (rhs.getGrade() <= this->getGradeSign())
        setSign(true);
    else   
        throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executor) const {
	if ((executor.getGrade() <= this->getGradeExec()) && this->getSign() == true)
		this->executeForm();
	else
		throw GradeTooLowException();
}

/* exception stuffs */

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

/* insertion operator overlaod */

std::ostream& operator<<(std::ostream& os, AForm&rhs) {
    return os << rhs.getName() << ", sign status " << rhs.getSign() ; 
}

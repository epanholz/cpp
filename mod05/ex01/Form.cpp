
#include "Form.hpp"

/* constructors and deconstructors */

Form::Form()
    : _name("meta"), _sign(false) , _grade_sign(1), _grade_exec(1) {}

Form::Form(const std::string name, int grade_sign, int grade_exec)
    : _name(name), _sign(false) , _grade_sign(grade_sign), _grade_exec(grade_exec) {
            if (grade_sign < 1 || grade_exec < 1)
                throw GradeTooHighException();
            if (grade_sign > 150 || grade_exec > 150)
                throw GradeTooLowException();
    }

Form::Form(const Form &rhs)
    : _name(rhs._name), _sign(rhs._sign) , _grade_sign(rhs._grade_sign), _grade_exec(rhs._grade_exec) {}

Form::~Form() {}

/* copy assignment operator overload */

Form& Form::operator=(const Form &rhs) {
    if (this == &rhs)
       return (*this);
    this->_sign = rhs._sign;
    return (*this);
}

/* getter and setter */

const std::string   &Form::getName() const {
    return (this->_name);
}

const bool          &Form::getSign() const {
    return (this->_sign);
}

const int           &Form::getGradeSign() const {
    return (this->_grade_sign);
}

const int           &Form::getGradeExec() const {
    return (this->_grade_exec);
}

void        Form::setSign(bool rhs) {
    this->_sign = rhs;
}

/* member functions */

void    Form::beSigned(Bureaucrat& rhs) {
    if (rhs.getGrade() <= this->getGradeSign())
        setSign(true);
    else   
        throw GradeTooLowException();
}

/* exception stuffs */

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

/* insertion operator overlaod */

std::ostream& operator<<(std::ostream& os, Form&rhs) {
    return os << rhs.getName() << ", sign status " << rhs.getSign() ; 
}

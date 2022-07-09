
#include "Bureaucrat.hpp"

/* constructors */

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
	: _name(name), _grade(grade) {
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
	}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) 
	: _name(rhs._name), _grade(rhs._grade) {}

Bureaucrat::~Bureaucrat() {}

/* copy assignment operator overload */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs) {
	//this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

/* getter abd setter */

const std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

/* member functions */

void	Bureaucrat::incGrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << this->_name <<  " could not sign " << form.getName() << " cause the grade was too low" << std::endl;
		return ;
	}
	std::cout << this->_name <<  " signed " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
	}
	catch (std::exception &e) {
		std::cout << this->_name << " could not execute " << form.getName() << std::endl;
		return ;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

/* insertion operator overload */

std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs){
    return os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ;
}

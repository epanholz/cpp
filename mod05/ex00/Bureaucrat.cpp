
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
	if (this == &rhs)
       return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

/* getter abd setter */

const std::string	&Bureaucrat::getName() const {
	return (this->_name);
}

const int			&Bureaucrat::getGrade() const {
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

/* exception stuffs */

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}


/* insertion operator overload */
std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs){
    return os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ;
}

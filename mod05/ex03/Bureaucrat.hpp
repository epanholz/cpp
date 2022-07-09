
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

    public: /* constructors and deconstructors */
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &rhs);
        virtual ~Bureaucrat();

    public: /* copy assignment operator overload */
        Bureaucrat& operator=(const Bureaucrat &rhs);

    public: /* getter and setter */
		const std::string	getName() const;
		int					getGrade() const;

    public: /* member functions */
		void				incGrade();
		void				decGrade();
		void				signForm(AForm& form);
		void				executeForm(AForm const &form);

    private: /* attributes */
		const std::string	_name;
		int					_grade;
	
	private: /* exception class */
	class GradeTooHighException : public std::exception {
		
		const char* what() const throw() {
			return "Grade is too high!";
		}
	};

	class GradeTooLowException : public std::exception {
		
		const char* what() const throw() {
			return "Grade is too low!";
		}
	};

};

std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs);

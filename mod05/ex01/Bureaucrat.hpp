
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {

    public: 
	/* constructors and deconstructors */
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &rhs);
        virtual ~Bureaucrat();

    /* copy assignment operator overload */
        Bureaucrat& operator=(const Bureaucrat &rhs);

    /* getter and setter */
		const std::string	&getName() const;
		const int			&getGrade() const;

    /* member functions */
		void				incGrade();
		void				decGrade();
		void				signForm(Form& rhs);

    private: 
	/* attributes */
		const std::string	_name;
		int					_grade;
	
	/* exception classes */
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs);


#pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public: /* constructors and deconstructors */
        Form();
        Form(const std::string name, int grade_sign, int grade_exec);
        Form(const Form &rhs);
        virtual ~Form();

    public: /* copy assignment operator overload */
        Form& operator=(const Form &rhs);

    public: /* getter and setter */
        const std::string   getName();
        bool                getSign();
        int                 getGradeSign();
        int                 getGradeExec();
        void                setSign(bool rhs);

    public: /* member functions */
        void                beSigned(Bureaucrat& rhs);

    private: /* attributes */
        const std::string   _name;
        bool                _sign;
        const int           _grade_sign;
        const int           _grade_exec;

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

std::ostream& operator<<(std::ostream& os, Form& rhs);

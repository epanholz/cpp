
#pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public: 
    /* constructors and deconstructors */
        Form();
        Form(const std::string name, int grade_sign, int grade_exec);
        Form(const Form &rhs);
        virtual ~Form();

    /* copy assignment operator overload */
        Form& operator=(const Form &rhs);

    /* getter and setter */
        const std::string   &getName() const;
        const bool          &getSign() const;
        const int           &getGradeSign() const;
        const int           &getGradeExec() const;
        void                setSign(bool rhs);

    /* member functions */
        void                beSigned(Bureaucrat& rhs);

    private: 
    /* attributes */
        const std::string   _name;
        bool                _sign;
        const int           _grade_sign;
        const int           _grade_exec;

	/* exception class */
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, Form& rhs);

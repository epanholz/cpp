
#pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    public: /* constructors and deconstructors */
        AForm(const std::string name, const std::string target, int grade_sign, int grade_exec);
        AForm(const AForm &rhs);
        virtual ~AForm();

    private: /* default constructor so we avoid using it */
        AForm();

    public: /* copy assignment operator overload */
        AForm& operator=(const AForm &rhs);

    public: /* getter and setter */
        const std::string   getName() const;
        const std::string   getTaget() const;
        bool                getSign() const;
        int                 getGradeSign() const;
        int                 getGradeExec() const;
        void                setSign(bool rhs);

    public: /* member functions */
       virtual void         beSigned(Bureaucrat& rhs);
       virtual void         execute(Bureaucrat const & executor) const;
       virtual void         executeForm() const = 0;

    private: /* attributes */
        const std::string   _name;
        const std::string   _target;
        bool                _sign;
        const int           _grade_sign;
        const int           _grade_exec;

	protected: /* exception class */
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, AForm& rhs);

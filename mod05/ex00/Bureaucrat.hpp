
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <exception>

class Bureaucrat {

    public: /* constructors and deconstructors */
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &rhs);
        virtual ~Bureaucrat();

    public: /* copy assignment operator overload */
        Bureaucrat& operator=(const Bureaucrat &rhs);

    public: /* getter and setter */
		const std::string	getName();
		int					getGrade();

    public: /* member functions */
		void				incGrade();
		void				decGrade();

    private: /* attributes */
		const std::string	_name;
		int					_grade;
	
	private: /* exception class */
	class MyException : public std::exception {
		
		const char* what() const throw() {
			return "Grade is out of range!";
		}
	};

};

std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);

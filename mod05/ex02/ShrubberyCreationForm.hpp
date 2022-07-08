
# pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public: /* constructors and deconstructors */
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		virtual ~ShrubberyCreationForm();

	public: /* copy assignment operator overload */
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);

	public: /* getter and setter */

	public: /* member functions */
		void	executeForm() const;

	private:
		std::string const	_file;

};

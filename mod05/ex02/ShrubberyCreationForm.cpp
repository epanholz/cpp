
#include "ShrubberyCreationForm.hpp"

/* constructors and deconstructors */

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("Shrubbery", target, 145, 137), _file(target+"_shrubbery") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) 
	: AForm(rhs) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/* copy assignment operator overlaod */

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	AForm::operator=(rhs);
	return (*this);
}

/* member functions */

void	ShrubberyCreationForm::executeForm() const {
	std::ofstream shrubberyFile(this->_file.c_str());
	shrubberyFile << "          # #### ####\n";
	shrubberyFile << "        ### \\/#|### |/####\n";
	shrubberyFile << "       ##\\/#/ \\||/##/_/##/_#\n";
	shrubberyFile << "     ###  \\/###|/ \\/ # ###\n";
	shrubberyFile << "   ##_\\_#\\_\\## | #/###_/_####\n";
	shrubberyFile << "  ## #### # \\ #| /  #### ##/##\n";
	shrubberyFile << "   __#_--###`  |{,###---###-~\n";
	shrubberyFile << "             \\ }{\n";
	shrubberyFile << "              }}{\n";
	shrubberyFile << "              }}{\n";
	shrubberyFile << "        	    {{}\n";
	shrubberyFile << "       , -=-~{ .-^- _";
	shrubberyFile.close();
}

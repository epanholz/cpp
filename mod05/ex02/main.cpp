
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat a("zino", 150);
	Bureaucrat c("angi", 1);
	AForm* b = new ShrubberyCreationForm("home");
	AForm* d = new RobotomyRequestForm("tree");
	AForm* f = new PresidentialPardonForm("cat");

	std::cout << "--- decrement execption ---" << std::endl;
	try {
		a.decGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "--- beSigned exception ---" << std::endl;
	try {
		b->beSigned(a);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "--- signing/executing forms ---" << std::endl;
	a.signForm(*b);
	c.signForm(*b);
	c.executeForm(*b);
	a.executeForm(*b);
	c.signForm(*d);
	c.executeForm(*d);
	a.executeForm(*f);
	c.signForm(*f);
	c.executeForm(*f);
	delete b;
	delete d;
	delete f;
}

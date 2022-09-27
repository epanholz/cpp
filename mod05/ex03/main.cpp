
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat a("zino", 1);
	Intern	someIntern;
	AForm*	form1;
	AForm*	form2;
	AForm*	form3;
	AForm*	form4;

	form1 = someIntern.makeForm("presidential pardon", "Target1");
	if (form1 != NULL) {
		a.signForm(*form1);
		a.executeForm(*form1);
		delete form1;
	}
	std::cout << std::endl;
	form2 = someIntern.makeForm("robotomy request", "Target2");
	if (form2 != NULL) {
		a.signForm(*form2);
		a.executeForm(*form2);
		delete form2;
	}
	std::cout << std::endl;
	form3 = someIntern.makeForm("shrubbery creation", "Target3");
	if (form3 != NULL) {
		a.signForm(*form3);
		a.executeForm(*form3);
		delete form3;
	}
	std::cout << std::endl;
	form4 = someIntern.makeForm("gibberish", "gibberish");
	if (form4 != NULL) {
		std::cout << form4->getTarget() << std::endl;
		delete form4;
	}
}

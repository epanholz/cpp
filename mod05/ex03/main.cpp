
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern	someIntern;
	AForm*	test;

	test = someIntern.makeForm("presidential pardon", "Bender");
	if (test != NULL) {
		std::cout << test->getTaget() << std::endl;
		delete test;
	}
}

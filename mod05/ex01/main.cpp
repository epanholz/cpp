
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat a("zino", 150);
	Bureaucrat c("angi", 1);
	Form b("panini", 1, 1);
	
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
		b.beSigned(a);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "--- signing forms ---" << std::endl;
	a.signForm(b);
	c.signForm(b);
}

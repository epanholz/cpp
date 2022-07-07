
#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat b("zino", 150);
	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
}

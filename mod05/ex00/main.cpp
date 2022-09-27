
#include "Bureaucrat.hpp"

int		main(void)
{
  std::cout << "--- constructor execptions ---" << std::endl;
  try {
		Bureaucrat a("liz", 200);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
  try {
		Bureaucrat a("liz", -1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
  std::cout << std::endl;

  std::cout << "--- decrement execption ---" << std::endl;
	Bureaucrat b("zino", 150);
	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
  std::cout << b << std::endl;
  std::cout << std::endl;
  
  std::cout << "--- increment execption ---" << std::endl;
  Bureaucrat c("angi", 1);
  try {
		c.incGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
  std::cout << c << std::endl;
}


#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl	harl;

	if (ac == 2)
		harl.complain(av[1]);
	else 
	{
		harl.complain("DEBUG");
		harl.complain("WARNING");
		harl.complain("INFO");
		harl.complain("ERROR");
		harl.complain("kek");
	}
	return(0);
}
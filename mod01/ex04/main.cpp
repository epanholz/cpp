
#include "replace.hpp"

int		main(int ac, char **av) {
	if (ac != 4)
		std::cout << "Too many or little arguments." << std::endl;
	else	
		ft_replace(av[1], av[2], av[3]);
}

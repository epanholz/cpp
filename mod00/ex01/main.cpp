
#include "phonebook.hpp"

int	main(void)
{
	Phonebook phonebook;
	std::string input;
	int i = 0;

	while (i == 0)
	{
		std::cout << "\033[35m" << "Please enter a command: " << "\033[0m";
		std::getline (std::cin, input);
		if (input.compare("EXIT") == 0)
			exit (0);
		else if (input.compare("ADD") == 0)
			phonebook.ft_add();
		else if (input.compare("SEARCH") == 0)
			phonebook.ft_search();
	}
	return 0;
}

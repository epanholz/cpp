
#include "phonebook.hpp"

int	main(void)
{
	Phonebook phonebook;
	std::string input;
	
	while (true)
	{
		std::cout << "\033[35m" << "Please enter a command: " << "\033[0m";
		std::getline (std::cin, input);
		if (input == "EXIT")
			exit (0);
		else if (input == "ADD")
			phonebook.ft_add();
		else if (input == "SEARCH")
			phonebook.ft_search();
	}
	return 0;
}

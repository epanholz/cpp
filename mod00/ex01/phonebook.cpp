
#include "phonebook.h"

void	ft_add(Phonebook contacts[], int size)
{
	int pos = size;
	if (pos > 8)
		pos = 7;
	//std::cout << "\e[1;1H\e[2J";
	std::cout << "\033[36m" << "Please, enter the contacts first name: " << "\033[0m";
	std::getline (std::cin,contacts[pos].first_name);
	std::cout << "\033[36m" << "Please, enter the contacts last name: " << "\033[0m";
	std::getline (std::cin,contacts[pos].last_name);
	std::cout << "\033[36m" << "Please, enter the contacts nickname: " << "\033[0m";
	std::getline (std::cin,contacts[pos].nick_name);
	std::cout << "\033[36m" << "Please, enter the contacts phone number: " << "\033[0m";
	std::getline (std::cin,contacts[pos].phone_number);
	std::cout << "\033[36m" << "Please, enter the contacts darkest secret: " << "\033[0m";
	std::getline (std::cin,contacts[pos].darkest_secret);
	//std::cout << "Hello, " << contacts[pos].first_name << "!\n";
}

void	ft_search(Phonebook contacts[], int size)
{
	int index;
	std::string input;

	for (int i = 0; i < size; i++)
		print_phonebook(contacts, i);
	std::cout << "\033[0;34m" << "Please enter the index you are looking for: " << "\033[0m";
	std::getline (std::cin, input);
	if(isNumber(input) == false || input.compare("0") == 0)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	index = stoi(input);
	if (index > size)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	for (int j = 0; j < size; j++)
	{
		if ((index-1) == j)
		{
			contacts[j].print_contact();
			return ;
		}
	}
}

int	main(void)
{
	Phonebook contacts[7];
	std::string input;
	int i = 0;
	int j = 0;

	while (i == 0)
	{
		std::cout << "\033[35m" << "Please enter a command: " << "\033[0m";
		std::getline (std::cin, input);
		if (input.compare("EXIT") == 0)
			exit (0);
		else if (input.compare("ADD") == 0)
		{
			ft_add(contacts, j);
			if (j < 8)
				j++;
		}
		else if (input.compare("SEARCH") == 0)
		{
		if (j == 0)
			std::cout << "\033[0;34m" << "Phonebook is empty\n" << "\033[0m";
		else
			ft_search(contacts, j);
		}
	}
	return 0;
}

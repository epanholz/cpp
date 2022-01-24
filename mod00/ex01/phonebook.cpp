#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

class Phonebook
{
    // Access specifier
    public:
 
    // Data Members
   	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
 
    // Member Functions()

	// accessing member function
    //test.printname();
};


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
	const char separator = ' ';
    const int width	= 10;

	if (size == 0)
		std::cout << "Phonebook is empty\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << "\033[33m" << std::right << std::setw(width) << std::setfill(separator) << i+1 << "|";
		std::cout << std::right << std::setw(width) << std::setfill(separator) << contacts[i].first_name << "|";
		std::cout << std::right << std::setw(width) << std::setfill(separator) << contacts[i].last_name << "|";
		std::cout << std::right << std::setw(width) << std::setfill(separator) << contacts[i].nick_name;
		std::cout << "\n" << "\033[0m";
	}
}

int	main(void)
{
    // Declare an object of class geeks
    //Phonebook test;
	Phonebook contacts[7];
	std::string input;
	int i = 0;
	int j = 0;
    // accessing data member
    //test.first_name = "Zino";
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
			ft_search(contacts, j);
	}
	return 0;
}

/*
Welcome to the 80s and its unbelievable technology! Write a program that behaves
like a crappy awesome phonebook software. Please take some time to give your exe-
cutable a relevant name. When the program starts, the user is prompted for input: 
youshould accept the ADD command, the SEARCH command or the EXIT command. 
Any otherinput is discarded.
The program starts empty (no contacts), doesn’t use any dynamic allocation, and
can’t store more than 8 contacts. If a ninth contact is added, replace the oldest 
contact.

only 8 contacts
*/
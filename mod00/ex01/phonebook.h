
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>
# include <stdio.h>
# include <stdlib.h>

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
	void	print_contact()
	{
		std::cout << "\033[33m";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << "FIRST NAME: ";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << first_name << "\n";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << "LAST NAME: ";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << last_name << "\n";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << "NICKNAME: ";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << nick_name << "\n";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << "PHONE NUMBER: ";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << phone_number << "\n";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << "DARKEST SECRET: ";
		std::cout << std::right << std::setw(17) << std::setfill(' ') << darkest_secret;
		std::cout << "\n" << "\033[0m";
	}
};

bool 	isNumber(const std::string str);
void	print_phonebook(Phonebook contacts[], int i);

#endif

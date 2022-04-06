
#include "phonebook.hpp"

void	Contact::print_contact()
{
	std::cout << "\033[33m" << "\n";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << "FIRST NAME: ";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << Contact::first_name << "\n";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << "LAST NAME: ";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << Contact::last_name << "\n";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << "NICKNAME: ";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << Contact::nick_name << "\n";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << "PHONE NUMBER: ";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << Contact::phone_number << "\n";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << "DARKEST SECRET: ";
	std::cout << std::left << std::setw(17) << std::setfill(' ') << Contact::darkest_secret;
	std::cout << "\n\n" << "\033[0m";
}

void Contact::print_index(int i)
{
	std::cout << "\033[33m";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << i << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << Contact::first_name.substr(0,10) << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << Contact::last_name.substr(0,10) << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << Contact::nick_name.substr(0,10);
	std::cout << "\n" << "\033[0m";
}

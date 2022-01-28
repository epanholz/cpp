
#include "phonebook.h"

bool isNumber(const std::string str)
{
    for (size_t i = 0; i < std::strlen(str.c_str()); i++)
        if (std::isdigit(str[i]) == 0) return false;
    return true;
}

void	print_phonebook(Phonebook contacts[], int i)
{
	std::cout << "\033[33m" << std::right << std::setw(10) << std::setfill(' ') << i+1 << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << contacts[i].first_name.substr(0,10) << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << contacts[i].last_name.substr(0,10) << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << contacts[i].nick_name.substr(0,10);
	std::cout << "\n" << "\033[0m";
}

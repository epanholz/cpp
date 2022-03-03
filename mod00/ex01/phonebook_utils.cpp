
#include "phonebook.hpp"

bool isNumber(const std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0) return false;
    return true;
}

void	print_header()
{
	std::cout << "\033[33m" << "\n";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "INDEX" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "FIRSTNAME" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "LASTNAME" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "NICKNAME";
	std::cout << "\n" << "\033[0m";
}
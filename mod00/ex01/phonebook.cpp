
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	Phonebook::_size = 0;
}

bool Phonebook::isNumber(const std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0) return false;
    return true;
}

void	Phonebook::print_header()
{
	std::cout << "\033[33m" << "\n";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "INDEX" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "FIRSTNAME" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "LASTNAME" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "NICKNAME";
	std::cout << "\n" << "\033[0m";
}

void	Phonebook::ft_add()
{
	int pos = Phonebook::_size;

	if (pos > 8)
		pos = 7;
	std::cout << "\033[36m" << "Please, enter the contacts first name: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[_size].first_name);
	std::cout << "\033[36m" << "Please, enter the contacts last name: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[_size].last_name);
	std::cout << "\033[36m" << "Please, enter the contacts nickname: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[_size].nick_name);
	std::cout << "\033[36m" << "Please, enter the contacts phone number: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[_size].phone_number);
	std::cout << "\033[36m" << "Please, enter the contacts darkest secret: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[_size].darkest_secret);
	Phonebook::_size++;
}

void	Phonebook::ft_search()
{
	int index;
	std::string input;

	if (Phonebook::_size == 0)
	{
		std::cout << "\033[0;34m" << "Phonebook is empty\n" << "\033[0m";
		return ;
	}
	print_header();
	for (int i = 0; i < Phonebook::_size; i++)
		Phonebook::contacts[i].print_index(i+1);
	std::cout << "\n" << "\033[0;34m" << "Please enter the index you are looking for: " << "\033[0m";
	std::getline (std::cin, input);
	if(Phonebook::isNumber(input) == false || input.compare("0") == 0)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	index = stoi(input);
	if (index > Phonebook::_size)
	{
		std::cout << "Invalid index\n";
		return ;
	}
	for (int j = 0; j < Phonebook::_size; j++)
	{
		if ((index-1) == j)
		{
			Phonebook::contacts[j].print_contact();
			return ;
		}
	}
}

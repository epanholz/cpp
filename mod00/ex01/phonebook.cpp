
#include "phonebook.hpp"

Phonebook::Phonebook()
	: _iter(0), _size(0), _max_size(8) {}

Phonebook::~Phonebook() {}

bool Phonebook::isNumber(const std::string str) {
    for (size_t i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0) return false;
    return true;
}

void	Phonebook::print_header() {
	std::cout << "\033[33m" << "\n";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "INDEX" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "FIRSTNAME" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "LASTNAME" << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "NICKNAME";
	std::cout << "\n" << "\033[0m";
}

void	Phonebook::ft_add() {
	Phonebook::_iter = Phonebook::_iter >= Phonebook::_max_size ? 0 : Phonebook::_iter;
	std::cout << "\033[36m" << "Please, enter the contacts first name: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[Phonebook::_iter].first_name);
	std::cout << "\033[36m" << "Please, enter the contacts last name: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[Phonebook::_iter].last_name);
	std::cout << "\033[36m" << "Please, enter the contacts nickname: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[Phonebook::_iter].nick_name);
	std::cout << "\033[36m" << "Please, enter the contacts phone number: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[Phonebook::_iter].phone_number);
	std::cout << "\033[36m" << "Please, enter the contacts darkest secret: " << "\033[0m";
	std::getline (std::cin,Phonebook::contacts[Phonebook::_iter].darkest_secret);
	Phonebook::_iter++;
	Phonebook::_size = Phonebook::_size == Phonebook::_max_size ? Phonebook::_size : Phonebook::_size + 1;
}

void	Phonebook::ft_search() {
	unsigned int 	index;
	std::string 	input;

	if (Phonebook::_size == 0) {
		std::cout << "\033[0;34m" << "Phonebook is empty\n" << "\033[0m";
		return ;
	}
	Phonebook::print_header();
	for (unsigned int i = 0; i < Phonebook::_size; i++)
		Phonebook::contacts[i].print_index(i+1);
	std::cout << "\n" << "\033[0;34m" << "Please enter the index you are looking for: " << "\033[0m";
	std::getline (std::cin, input);
	if(input.empty() || Phonebook::isNumber(input) == false || input.compare("0") == 0) {
		std::cout << "Invalid index\n";
		return ;
	}
	index = stoi(input);
	if (index > Phonebook::_size) {
		std::cout << "Invalid index\n";
		return ;
	}
	for (unsigned int j = 0; j < Phonebook::_size; j++) {
		if ((index-1) == j) {
			Phonebook::contacts[j].print_contact();
			return ;
		}
	}
}

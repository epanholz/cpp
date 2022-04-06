
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>
# include <stdio.h>
# include <stdlib.h>

class Contact
{
	public:
 
   	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	void	print_contact();
	void	print_index(int i);
};

class Phonebook
{
    public:
 
	Contact	contacts[7];
	int		_size;

	bool 	isNumber(const std::string str);
	void	print_header();
	void	ft_add();
	void	ft_search();

	Phonebook();

	private:

};

#endif

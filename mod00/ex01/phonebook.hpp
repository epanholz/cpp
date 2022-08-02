
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>
# include <stdio.h>
# include <stdlib.h>
# include <cctype>

class Contact {

	public: /* constructors and decpnstructors */
		Contact();
		~Contact();

	public: /* member functions */
		void	print_contact();
		void	print_index(int i);

	public:	/* attributes */	
   		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
};

class Phonebook {
    
	public: /* constructors and decpnstructors */
		Phonebook();
		~Phonebook();

	public: /* member functions */
		bool 				isNumber(const std::string str);
		void				print_header();
		void				ft_add();
		void				ft_search();

	public: /* attributes */
		Contact				contacts[8];

	private: /* attributes */
		unsigned int		_iter;
		unsigned int		_size;
		const unsigned int	_max_size;
};

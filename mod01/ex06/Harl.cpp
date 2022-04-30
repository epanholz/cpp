
#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

const t_lookup	Harl::func_lookup_table[] = {
	{"DEBUG", &Harl::debug}, {"INFO", &Harl::info}, 
	{"WARNING", &Harl::warning}, {"ERROR", &Harl::error}
};

int Harl::return_level(std::string level) {
	static const char *levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}	
	return(eInval);
}

void	Harl::complain(std::string level) {
	//void (Harl::*pt2Function)(void) = NULL;

	switch (this->return_level(level)) {
		case eDebug:
			(this->*func_lookup_table[eDebug].func)();
		case eInfo:
			(this->*func_lookup_table[eInfo].func)();
		case eWarning:
			(this->*func_lookup_table[eWarning].func)();
		case eError:
			(this->*func_lookup_table[eError].func)();
    }
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

#include "Harl.hpp"

/* constructors and deconstructors */

Harl::Harl() {}

Harl::~Harl() {}

/* member functions */

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
	void (Harl::*pt2Function)(void) = NULL;

	switch (this->return_level(level)) {
		case eDebug:
			pt2Function = &Harl::debug;
			break ;
		case eInfo:
			pt2Function = &Harl::info;
			break ;
		case eWarning:
			pt2Function = &Harl::warning;
			break ;
		case eError:
			pt2Function = &Harl::error;
			break ;
		default:
			std::cout << "Wrong input!" << std::endl;
			return ;
    }
	(this->*pt2Function)();
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

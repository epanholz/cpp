
# pragma once

# include <iostream>
# include <fstream>
# include <string>

enum eLevels {eDebug, eInfo, eWarning, eError, eInval};

class Harl {

public:
	Harl();
	~Harl();
	int		return_level(std::string  level);
	void	complain(std::string level);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

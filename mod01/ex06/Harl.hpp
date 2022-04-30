
# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Harl;
enum eLevels {eDebug, eInfo, eWarning, eError, eInval};
typedef void (Harl::*pt2Function)(void);

typedef struct s_lookup
{
	const std::string		level;
	const pt2Function		&func;
}				t_lookup;

class Harl {

public:
	Harl();
	~Harl();
	int		return_level(std::string  level);
	void	complain(std::string level);

private:
	const static t_lookup	func_lookup_table[];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

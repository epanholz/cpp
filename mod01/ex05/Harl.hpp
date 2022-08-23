
# pragma once

# include <iostream>
# include <fstream>
# include <string>

enum eLevels {eDebug, eInfo, eWarning, eError, eInval};

class Harl {

	public: /* constructors and deconstructors */
		Harl();
		~Harl();

    public: /* member functions */
		int		return_level(std::string  level);
		void	complain(std::string level);

	private: /* member functions */
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

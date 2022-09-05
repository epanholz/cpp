# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Brain {

	public: /* constructors and deconstructors */
		Brain();
		Brain(const Brain &old_obj);
		virtual ~Brain();

	public: /* copy assignment operator overload */
		Brain& operator=(const Brain &old_obj);

	private: /* attributes */
		std::string ideas[100];

};

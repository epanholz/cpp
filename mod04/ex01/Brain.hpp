# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Brain {

public: /* constructors and deconstructors */
	Brain();
	Brain(const Brain &old_obj);
	Brain& operator=(const Brain &old_obj);
	virtual ~Brain();

public: /* getter and setter */


public: /* member functions */


private: /* attributes */
	std::string ideas[100];

};

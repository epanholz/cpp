
# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Animal {

public: /* constructors and deconstructors */
	Animal();
	Animal(std::string name);
	Animal(const Animal &old_obj);
	Animal& operator=(const Animal &old_obj);
	virtual ~Animal();

public: /* getter and setter */
	std::string		getType() const;

public: /* member functions */
	virtual void	makeSound() const = 0;

protected: /* attributes */
	std::string type;
};

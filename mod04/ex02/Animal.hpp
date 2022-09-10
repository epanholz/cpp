
# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Animal {

public: /* constructors and deconstructors */
	Animal();
	Animal(std::string name);
	Animal(const Animal &rhs);
	virtual ~Animal();

private: /* constructor to make sure we always use the other one */

public: /* copy assignment operator overload */
	Animal& operator=(const Animal &rhs);
	
public: /* getter and setter */
	std::string		getType() const;

public: /* member functions */
	virtual void	makeSound() const = 0;

protected: /* attributes */
	std::string type;
};

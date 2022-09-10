
#include "Animal.hpp"

/* constructors and deconstructors */

Animal::Animal() 
	: type("meta") {
	std::cout << "Animal default constructor called :3" << std::endl;
}

Animal::Animal(std::string type) 
	: type(type) {
	std::cout << "Animal type constructor called :3" << std::endl;
}

Animal::Animal(const Animal &rhs){
	std::cout << "Copy constructor called :D" << std::endl;
	this->type = rhs.type;
}

Animal::~Animal(){
	std::cout << "Animal deconstructor called :3" << std::endl;
}

/* copy assignment operator overload */

Animal& Animal::operator=(const Animal &rhs){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->type = rhs.type;
	return (*this);
}

/* getter and setter */

std::string		Animal::getType() const {
	return (this->type);
}

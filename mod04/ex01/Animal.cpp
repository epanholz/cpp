
#include "Animal.hpp"

/* constructors and deconstructors */

Animal::Animal() 
	: type("Animal") {
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

Animal& Animal::operator=(const Animal &rhs){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal deconstructor called :3" << std::endl;
}

/* getter and setter */

std::string		Animal::getType() const {
	return (this->type);
}

/* member functions */

void			Animal::makeSound() const{
	std::cout << "*indistinguishable animal sound!*" << std::endl;
}
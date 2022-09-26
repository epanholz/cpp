
#include "WrongAnimal.hpp"

/* constructors and deconstructors */

WrongAnimal::WrongAnimal() 
	: type("Wrong Animal") {
	std::cout << "WrongAnimal default constructor called :3" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) 
	: type(type) {
	std::cout << "WrongAnimal type constructor called :3" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs){
	std::cout << "Copy constructor called :D" << std::endl;
	this->type = rhs.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	if (this == &rhs)
       return (*this);
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal deconstructor called :3" << std::endl;
}

/* getter and setter */

std::string		WrongAnimal::getType() const {
	return (this->type);
}

/* member functions */

void			WrongAnimal::makeSound() const{
	std::cout << "*indistinguishable Wrong Animal sound!*" << std::endl;
}
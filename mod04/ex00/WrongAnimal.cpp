
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

WrongAnimal::WrongAnimal(const WrongAnimal &old_obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->type = old_obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->type = old_obj.type;
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
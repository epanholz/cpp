#include "Dog.hpp"

/* constructors and deconstructors */

Dog::Dog() 
	: Animal("Dog") {
	std::cout << "Dog default constructor called (❍ᴥ❍ʋ)" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog &old_obj){
	std::cout << "Copy Dog constructor called (❍ᴥ❍ʋ)" << std::endl;
	this->type = old_obj.type;
}

Dog& Dog::operator=(const Dog &old_obj){
	std::cout << "Copy Dog assignment operator called (❍ᴥ❍ʋ)" << std::endl;
	this->type = old_obj.type;
	return (*this);
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog deconstructor called (❍ᴥ❍ʋ)" << std::endl;
}

/* member functions */

void	Dog::makeSound() const{
	std::cout << "Grrrr Bark!" << std::endl;
}

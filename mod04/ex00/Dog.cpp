#include "Dog.hpp"

/* constructors and deconstructors */

Dog::Dog() 
	: Animal("Dog") {
	std::cout << "Dog default constructor called (❍ᴥ❍ʋ)" << std::endl;
}

Dog::Dog(const Dog &rhs){
	std::cout << "Copy Dog constructor called (❍ᴥ❍ʋ)" << std::endl;
	this->type = rhs.type;
}

Dog& Dog::operator=(const Dog &rhs){
	std::cout << "Copy Dog assignment operator called (❍ᴥ❍ʋ)" << std::endl;
	if (this == &rhs)
       return (*this);
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog deconstructor called (❍ᴥ❍ʋ)" << std::endl;
}

/* member functions */

void	Dog::makeSound() const{
	std::cout << "Grrrr Bark!" << std::endl;
}

#include "Dog.hpp"

/* constructors and deconstructors */

Dog::Dog() 
	: Animal("Dog") {
	std::cout << "Dog default constructor called (❍ᴥ❍ʋ)" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog &rhs){
	std::cout << "Copy Dog constructor called (❍ᴥ❍ʋ)" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog deconstructor called (❍ᴥ❍ʋ)" << std::endl;
}

/* copy assignment operator overload */

Dog& Dog::operator=(const Dog &rhs){
	std::cout << "Copy Dog assignment operator called (❍ᴥ❍ʋ)" << std::endl;
	this->type = rhs.type;
	*this->brain = *rhs.brain;
	return (*this);
}

/* member functions */

void	Dog::makeSound() const{
	std::cout << "Grrrr Bark!" << std::endl;
}

/* getter and setter for testing */

void			Dog::setIdea(int index, std::string idea) {
	this->brain->setIdea(index, idea);
}

std::string		Dog::getIdea(int index) const {
	return (this->brain->getIdea(index));
}


#include "Cat.hpp"

/* constructors and deconstructors */

Cat::Cat() 
	: Animal("Cat") {
	std::cout << "Cat default constructor called =^｡ꞈ｡^=" << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat &old_obj){
	std::cout << "Copy Cat constructor called =^｡ꞈ｡^=" << std::endl;
	this->type = old_obj.type;
}

Cat& Cat::operator=(const Cat &old_obj){
	std::cout << "Copy Cat assignment operator called =^｡ꞈ｡^=" << std::endl;
	this->type = old_obj.type;
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat deconstructor called =^｡ꞈ｡^=" << std::endl;
	delete this->brain;
}

/* member functions */

void	Cat::makeSound() const {
	std::cout << "Miauuw!" << std::endl;
}
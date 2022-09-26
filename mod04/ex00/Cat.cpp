
#include "Cat.hpp"

/* constructors and deconstructors */

Cat::Cat() 
	: Animal("Cat") {
	std::cout << "Cat default constructor called =^｡ꞈ｡^=" << std::endl;
}

Cat::Cat(const Cat &rhs) {
	std::cout << "Copy Cat constructor called =^｡ꞈ｡^=" << std::endl;
	this->type = rhs.type;
}

Cat& Cat::operator=(const Cat &rhs){
	std::cout << "Copy Cat assignment operator called =^｡ꞈ｡^=" << std::endl;
	if(this == &rhs)
       return (*this);
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat deconstructor called =^｡ꞈ｡^=" << std::endl;
}

/* member functions */

void	Cat::makeSound() const {
	std::cout << "Miauuw!" << std::endl;
}

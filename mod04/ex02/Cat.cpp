
#include "Cat.hpp"

/* constructors and deconstructors */

Cat::Cat() 
	: Animal("Cat") {
	std::cout << "Cat default constructor called =^｡ꞈ｡^=" << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat &rhs){
	std::cout << "Copy Cat constructor called =^｡ꞈ｡^=" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat deconstructor called =^｡ꞈ｡^=" << std::endl;
}

/* copy assignment operator overload */

Cat& Cat::operator=(const Cat &rhs){
	std::cout << "Copy Cat assignment operator called =^｡ꞈ｡^=" << std::endl;
	if (this == &rhs)
       return (*this);
	this->type = rhs.type;
	*this->brain = *rhs.brain;
	return (*this);
}

/* member functions */

void	Cat::makeSound() const {
	std::cout << "Miauuw!" << std::endl;
}

/* getter and setter for testing */

void			Cat::setIdea(int index, std::string idea) {
	this->brain->setIdea(index, idea);
}

std::string		Cat::getIdea(int index) const {
	return (this->brain->getIdea(index));
}

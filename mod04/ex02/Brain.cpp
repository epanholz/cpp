#include "Brain.hpp"

/* constructors and deconstructors */

Brain::Brain() {
	std::cout << "Brain default constructor called :D" << std::endl;
}

Brain::Brain(const Brain &rhs){
	std::cout << "Brain copy constructor called :D" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
}

Brain::~Brain(){
	std::cout << "Brain deconstructor called :D" << std::endl;
}

/* copy assignment operator overload */

Brain& Brain::operator=(const Brain &rhs){
	std::cout << "Brain Copy assignment operator called :D" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

/* getter and setter for testing */

void			Brain::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string		Brain::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (NULL);
}

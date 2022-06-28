#include "Brain.hpp"

/* constructors and deconstructors */

Brain::Brain() {
	std::cout << "Brain default constructor called :3" << std::endl;
}

Brain::Brain(const Brain &old_obj){
	std::cout << "Copy constructor called :D" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = old_obj.ideas[i];
	}
}

Brain& Brain::operator=(const Brain &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = old_obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain deconstructor called :3" << std::endl;
}

/* getter and setter */

/* member functions */

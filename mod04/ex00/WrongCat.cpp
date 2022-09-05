
#include "WrongCat.hpp"

/* constructors and deconstructors */

WrongCat::WrongCat() 
	: WrongAnimal("Wrong Cat") {
	std::cout << "WrongCat default constructor called =^｡ꞈ｡^=" << std::endl;
}

WrongCat::WrongCat(const WrongCat &old_obj){
	std::cout << "Copy WrongCat constructor called =^｡ꞈ｡^=" << std::endl;
	this->type = old_obj.type;
}

WrongCat& WrongCat::operator=(const WrongCat &old_obj){
	std::cout << "Copy WrongCat assignment operator called =^｡ꞈ｡^=" << std::endl;
	this->type = old_obj.type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat deconstructor called =^｡ꞈ｡^=" << std::endl;
}

/* member functions */

void	WrongCat::makeSound() const {
	std::cout << "Wrong Miauuw!" << std::endl;
}
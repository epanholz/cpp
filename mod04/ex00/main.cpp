
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main() {
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << " goes ";
	meta->makeSound(); //will output the animal sound!
	std::cout << i->getType() << " goes ";
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " goes ";
	j->makeSound(); //will output the dog sound!
	std::cout << beta->getType() << " goes ";
	beta->makeSound(); //will output the wrong animal sound!
	std::cout << k->getType() << " goes ";
	k->makeSound(); //will output the wrong animal sound!
	std::cout << std::endl;

	delete meta;
	delete beta;
	delete i;
	delete j;
	delete k;
}

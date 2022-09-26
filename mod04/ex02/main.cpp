
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int		main() {
	std::cout << "------- INITIALIZATION TEST -------" << std::endl;

	//Animal* animal = new Animal();

	const Animal* a[4];
	a[0] = new Cat();
	a[1] = new Cat();
	a[2] = new Dog();
	a[3] = new Dog();

	std::cout << std::endl; 

	for (int i = 0; i < 4; i++) {
		delete a[i];
	}

	std::cout << std::endl;

	std::cout << "------- CAT DEEP COPY TEST -------" << std::endl;
	Cat* cat = new Cat();
	cat->setIdea(0, "food");
	std::cout << "cat idea: " << cat->getIdea(0) << std::endl;
	std::cout << std::endl;

	Cat* brownCat = new Cat();
	*brownCat = *cat;
	brownCat->setIdea(0, "sleep");
	std::cout << "brownCat idea: " << brownCat->getIdea(0) << std::endl;
	std::cout << "cat idea: " << cat->getIdea(0) << std::endl;
	std::cout << std::endl;

	Cat *whiteCat = new Cat(*cat);
	whiteCat->setIdea(0, "play");
	std::cout << "whiteCat idea: " << whiteCat->getIdea(0) << std::endl;
	std::cout << "cat idea: " << cat->getIdea(0) << std::endl;
	std::cout << std::endl;

	std::cout << "------- DOG DEEP COPY TEST -------" << std::endl;
	Dog* dog = new Dog();
	dog->setIdea(0, "food");
	std::cout << "dog idea: " << dog->getIdea(0) << std::endl;
	std::cout << std::endl;

	Dog* brownDog = new Dog();
	*brownDog = *dog;
	brownDog->setIdea(0, "sleep");
	std::cout << "brownDog idea: " << brownDog->getIdea(0) << std::endl;
	std::cout << "dog idea: " << dog->getIdea(0) << std::endl;
	std::cout << std::endl;

	Dog *whiteDog = new Dog(*dog);
	whiteDog->setIdea(0, "play");
	std::cout << "whiteDog idea: " << whiteDog->getIdea(0) << std::endl;
	std::cout << "dog idea: " << dog->getIdea(0) << std::endl;
}

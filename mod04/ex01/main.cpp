
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int		main() {
	const Animal* a[4];
	a[0] = new Cat();
	a[1] = new Cat();
	a[2] = new Dog();
	a[3] = new Dog();

	for (int i = 0; i < 4; i++) {
		delete a[i];
	}
}

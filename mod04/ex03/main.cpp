
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	std::cout << "\n---- STANDART TESTS ----\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("panini");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("giberrish");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(3);
	me->unequip(4);
	me->use(1, *bob);
	std::cout << "\n---- DEEP COPY TEST ----\n" << std::endl;
	Character *liz = new Character("liz");
	Character *zino = new Character("zino");
	tmp = src->createMateria("ice");
	liz->equip(tmp);
	tmp = src->createMateria("cure");
	liz->equip(tmp);
	*zino = *liz;
	liz->unequip(0);
	liz->unequip(1);
	liz->use(0, *zino);
	zino->use(0, *liz);
	delete bob;
	delete me;
	delete liz;
	delete zino;
	delete src;
}

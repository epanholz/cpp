
#include "Character.hpp"

/* constructors and deconstructors */

Character::Character() {}

Character::Character(std::string const &name) 
    : _name(name) {
		for (int i = 0; i < 4; i++) 
			this->_inventory[i] = NULL;
		this->_unequipped_size = 2;
		this->_unequipped = new AMateria*[this->_unequipped_size];
		for (int j = 0; j < this->_unequipped_size; j++) 
			this->_unequipped[j] = NULL;
	}

Character::Character(const Character &rhs) {
	for (int i = 0; i < 4; i++) {
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = rhs._name;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int j = 0; j < this->_unequipped_size; j++)
		delete this->_unequipped[j];
	delete[] _unequipped;
}

/* copy assignment operator overload */

Character&			Character::operator=(const Character &rhs) {
	for (int j = 0; j < 4; j++)
		delete this->_inventory[j];
	for (int i = 0; i < 4; i++) {
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = rhs._name;
	return (*this);
}

/* getter and setter */

std::string const & Character::getName() const {
	return (this->_name);
}

/* member functions */

void	Character::equip(AMateria* m) {
	if (!m) {
		std::cout << this->getName() << " has nothing to equip" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << "* " << this->getName() << " equipped the materia " <<  m->getType() << " *" << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << "'s inventory is full! Could not equip " <<  m->getType() << std::endl;
}

void	Character::handle_unequip(int idx) {
	for (int i = 0; i < this->_unequipped_size; i++) {
		if (this->_unequipped[i] == NULL) {
			this->_unequipped[i] = this->_inventory[idx];
			return ;
		}
	}
	int new_size = this->_unequipped_size * 2;
	AMateria** new_unequipped = new AMateria*[new_size];
	for (int i = 0; i < new_size; i++)
		new_unequipped[i] = NULL;
	for (int i = 0; i < this->_unequipped_size; i++)
		new_unequipped[i] = this->_unequipped[i];
	delete[] this->_unequipped;
	this->_unequipped = new_unequipped;
	this->_unequipped_size = new_size;
}

void	Character::unequip(int idx) {
	if (idx < 4 && idx >= 0) {
		if (this->_inventory[idx] != NULL) {
			this->handle_unequip(idx);
			std::cout << "* " << this->getName() << " unequippd the materia " << this->_inventory[idx]->getType() << " *" << std::endl;
			this->_inventory[idx] = NULL;
		}
		else
			std::cout << this->getName() << " has nothing to unequip" << std::endl;
	}
	else 
		std::cout << this->getName() << " has nothing to unequip" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 4 && idx >= 0) {
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
		else
			std::cout << this->getName() << " can't find a weapon in that slot" << std::endl;
	}
	else
		std::cout << this->getName() << " can't find a weapon in that slot" << std::endl;
}

/* DYNAMIC TRASHBIN ARRAY

if old trash_array if full
int new_size = old_size * 2;
int *new_array = new AMateria[new_size];
copy old data
delete old_array;

*/

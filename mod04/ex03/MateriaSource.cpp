
#include  "MateriaSource.hpp"

/* constructors and deconstructors */

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &rhs) {
	for (int i = 0; i < 4; i++) {
		if (rhs._materia[i] != NULL)
			this->_materia[i] = rhs._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete this->_materia[i];
	}
}

/* copy assignment operator overload */

MateriaSource&			MateriaSource::operator=(const MateriaSource &rhs) {
	for (int j = 0; j < 4; j++)
		delete this->_materia[j];
	for (int i = 0; i < 4; i++) {
		if (rhs._materia[i] != NULL)
			this->_materia[i] = rhs._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return (*this);
}

/* member functions */

void		MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL) {
			this->_materia[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}

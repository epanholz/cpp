
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
    AMateria* tmp;
    tmp = new Ice();
    std::cout << tmp->getType() << std::endl;
}

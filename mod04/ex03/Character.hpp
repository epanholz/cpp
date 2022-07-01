
# pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {

    public: /* constructors and deconstructors */
        Character();
        Character(std::string const &name);
        Character(const Character &rhs);
        virtual ~Character();

    public: /* copy assignment operator overload */
        Character& operator=(const Character &rhs);

    public: /* getter and setter */
        std::string const & getName() const;

    public: /* member functions */
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private: /* attributes */
        AMateria*   inventory[4];
        std::string name;

};

# pragma once

# include <iostream>
# include <fstream>
# include <string>

class ICharacter {
	public: /* constructors and deconstructors */
		ICharacter();
		ICharacter(std::string name);
		ICharacter(const ICharacter &old_obj);
		virtual ~ICharacter();

	public: /* copy assignment operator overload */
		ICharacter& operator=(const ICharacter &old_obj);

	public: /* getter and setter */
		virtual std::string const & getName() const = 0;

	public: /* member functions */
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	protected: /* attributes */
		std::string name;
		// inventroy[4]

};
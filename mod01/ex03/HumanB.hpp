
#pragma once

# include "Weapon.hpp"

class HumanB {

	public: /* constructors and deconstructors */
		HumanB(std::string name);
		~HumanB();

	public: /* member functions */
		void	setWeapon(Weapon& weapon);
		void	attack( void );

	private: /* attributes */
		std::string	_name;
		Weapon*		_weapon;

};

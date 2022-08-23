
#pragma once

# include "Weapon.hpp"

class HumanA {

	public: /* constructors and deconstructors */
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		
	public: /* member functions */
		void	attack( void );

	private: /* attributes */
		std::string _name;
		Weapon&		_weapon;

};

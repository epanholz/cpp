
#pragma once

# include <iostream>
# include <string>

class Weapon {

	public: /* constructors and deconstructors */
		Weapon();
		Weapon(std::string type);
		~Weapon();

	public: /* getter and setter */
		const std::string& getType( void ) const;
		void setType(std::string type);

	private: /* attributes */
		std::string _type;

};

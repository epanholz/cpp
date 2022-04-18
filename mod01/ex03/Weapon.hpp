
#pragma once

# include <iostream>
# include <string>

class Weapon {

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string& getType( void ) const;
	void setType(std::string type);

private:
	std::string _type;

};

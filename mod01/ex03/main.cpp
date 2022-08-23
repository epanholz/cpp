
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main ( void )
{
	{
		Weapon axe = Weapon("very sharp axe");
		HumanA bob("Bob", axe);
		bob.attack();
		axe.setType("not so sharp axe");
		bob.attack();
	}
	{
		Weapon club = Weapon("spiky club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("not spiky club");
		jim.attack();
	}
}

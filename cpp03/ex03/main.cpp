#include "ClapTrap.hpp"

int main ()
{
	ClapTrap player1 = ClapTrap("joe");
	player1.attack("jeff");
	player1.takeDamage(10);
	player1.takeDamage(10);
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.attack("jeff");
	player1.beRepaired(10);
	player1.beRepaired(10);
	player1.takeDamage(10);
	player1.beRepaired(10);
	player1.takeDamage(10);
}
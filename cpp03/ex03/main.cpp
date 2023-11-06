#include "DiamondTrap.hpp"

int main ()
{
	int n;
	DiamondTrap player1 = DiamondTrap("joe");
	std::cout << "----------------------------------->> dead test\n";
	for (size_t i = 0; i < 11; i++)
	{
		player1.highFivesGuys();
		player1.takeDamage(10);
	}
		player1.attack("jeff");
	std::cin.get();
	std::cout << "----------------------------------->> repaire test\n";
	player1.beRepaired(10);
	player1.beRepaired(10);
	std::cin.get();
	std::cout << "----------------------------------->> energy test\n";
	for (size_t i = 0; i < 46; i++)
	{
		player1.attack("jeff");
	}
}
#include "FragTrap.hpp"

int main ()
{
	int n;
	FragTrap player1 = FragTrap("joe");
	std::cout << "----------------------------------->> dead test\n";
	for (size_t i = 0; i < 11; i++)
	{
		player1.takeDamage(10);
	}
		player1.attack("jeff");
	std::cin.get();
	std::cout << "----------------------------------->> repaire test\n";
	player1.beRepaired(100);
	player1.beRepaired(1000);
	std::cin.get();
	std::cout << "----------------------------------->> energy test\n";
	for (size_t i = 0; i < 46; i++)
	{
		player1.attack("jeff");
		player1.highFivesGuys();
	}
}
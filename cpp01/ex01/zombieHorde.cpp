#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zmans;
	
	zmans = new Zombie[N];
	for (size_t i = 0; i < N; i++)
	{
		zmans[i] = Zombie(name);
	}
	return zmans;
}
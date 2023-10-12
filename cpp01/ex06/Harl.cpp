#include "Harl.hpp"
void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level )
{
	std::string str[4] ={ "DEBUG","INFO","WARNING","ERROR"};
	int i = 0;
	C action[4] = {nullptr};
	while (i<4 && level.compare(str[i]) != 0)
	{
		i++;
	}
	switch (i)
	{
		case 0 /* constant-expression */:
			action[0] = &Harl::debug;
		case 1 /* constant-expression */:
			action[1] = &Harl::info;
		case 2 /* constant-expression */:
			action[2] = &Harl::warning;
		case 3 /* constant-expression */:
			action[3] = &Harl::error;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	int j = -1;
	while(++j < 4 && action[j] != nullptr)
		(this->*action[j])();
}

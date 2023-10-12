#include "Harl.hpp"
void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \nenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \nyears whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string str[4] ={ "DEBUG","INFO","WARNING","ERROR"};
	int i = 0;
	C action = nullptr;
	while (level.empty() == false && i<4 && level.compare(str[i]) != 0)
	{
		i++;
	}
	switch (i)
	{
		case 0 /* constant-expression */:
			action = &Harl::debug;
			break;
		case 1 /* constant-expression */:
			action = &Harl::info;
			break;
		case 2 /* constant-expression */:
			action = &Harl::warning;
			break;
		case 3 /* constant-expression */:
			action = &Harl::error;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	if(action != nullptr)
		(this->*action)();
}

#pragma once
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class ClapTrap 
{
	public:
    	ClapTrap ();
    	ClapTrap (std::string name, int health, int energy, int attack);
    	ClapTrap (const ClapTrap &a);
    	~ClapTrap ();
		ClapTrap& operator=(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		int healthStat;
		int energyStat;
		int attackStat;
};
#endif

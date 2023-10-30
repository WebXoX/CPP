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
    	ClapTrap (std::string name);
    	ClapTrap (const ClapTrap &a);
    	~ClapTrap ();
		ClapTrap& operator=(const ClapTrap &a);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string name;
		int healthStat;
		int energyStat;
		int attackStat;
		int pointsStat;
};
#endif

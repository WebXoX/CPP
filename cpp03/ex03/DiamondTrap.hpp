#pragma once
#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"
class DiamondTrap: public FragTrap,public ScavTrap 
{
	private:
	std::string name;

	public:
    	DiamondTrap ();
    	DiamondTrap (std::string name);
    	DiamondTrap (const DiamondTrap &a);
    	~DiamondTrap ();
		void whoAmI();
		DiamondTrap& operator=(const DiamondTrap &a);
};
#endif

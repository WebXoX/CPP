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
class DiamondTrap: public  FragTrap,public  ScavTrap 
{
	private:
	std::string name;

	public:
    	/* orthodox form*/
    	DiamondTrap ();
    	DiamondTrap (const DiamondTrap &a);
    	~DiamondTrap ();

    	DiamondTrap (std::string name);
		void whoAmI();
		DiamondTrap& operator=(const DiamondTrap &a);
};
#endif

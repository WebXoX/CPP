#pragma once
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"
class ScavTrap: public virtual ClapTrap 
{
	public:
    	/* orthodox form*/
    	ScavTrap ();
    	ScavTrap (const ScavTrap &a);
    	~ScavTrap ();
		ScavTrap& operator=(const ScavTrap &a);
		
		void guardGate();
    	ScavTrap (std::string name);
		void attack(const std::string& target);

};
#endif

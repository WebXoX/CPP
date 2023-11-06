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
    	ScavTrap ();
    	ScavTrap (std::string name);
    	ScavTrap (const ScavTrap &a);
    	~ScavTrap ();
		void guardGate();
		ScavTrap& operator=(const ScavTrap &a);
};
#endif

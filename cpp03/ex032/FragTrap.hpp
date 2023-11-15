#pragma once
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"
class FragTrap: public virtual ClapTrap 
{
	public:
    	/* orthodox form*/
    	FragTrap ();
    	FragTrap (const FragTrap &a);
    	~FragTrap ();
		FragTrap& operator=(const FragTrap &a);

    	FragTrap (std::string name);
		void highFivesGuys(void);
};
#endif

#pragma once
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"
class FragTrap: virtual public  ClapTrap 
{
	public:
    	FragTrap ();
    	FragTrap (std::string name);
    	FragTrap (const FragTrap &a);
    	~FragTrap ();
		void highFivesGuys(void);
		FragTrap& operator=(const FragTrap &a);
};
#endif

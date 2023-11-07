#pragma once
#ifndef __DOG_H__
#define __DOG_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class Dog 
{
	public:
    	Dog ();
    	Dog (std::string name);
    	Dog (const Dog &a);
    	~Dog ();
		Dog& operator=(const Dog &a);
		virtual makeSound();
	protected:
		std::string type;
};
#endif

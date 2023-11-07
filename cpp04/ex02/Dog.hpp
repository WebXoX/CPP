#pragma once
#ifndef __DOG_H__
#define __DOG_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Brain.hpp"
#include "Animal.hpp"
class Dog:public Animal
{
	public:
    	Dog ();
    	Dog (std::string name);
    	Dog (const Dog &a);
    	~Dog ();
		Dog& operator=(const Dog &a);
		void makeSound() const;
		Brain* getBrains() const;
	private:
		Brain* brains;
		std::string type;
};
#endif

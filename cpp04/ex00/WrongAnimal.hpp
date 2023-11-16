#pragma once
#ifndef __WRONG_ANIMAL_H__
#define __WRONG_ANIMAL_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class WrongAnimal 
{
	public:
    	WrongAnimal ();
    	WrongAnimal (std::string name);
    	WrongAnimal (const WrongAnimal &a);
    	virtual ~WrongAnimal ();
		WrongAnimal& operator=(const WrongAnimal &a);
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};
#endif

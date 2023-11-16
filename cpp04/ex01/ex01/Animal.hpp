#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class Animal 
{
	public:
    	Animal ();
    	Animal (std::string name);
    	Animal (const Animal &a);
    	virtual ~Animal ();
		Animal& operator=(const Animal &a);
		virtual void makeSound() const;
		virtual std::string getType() const;
	private:
		std::string type;
};
#endif

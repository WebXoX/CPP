#pragma once
#ifndef __NOTANIMAL_H__
#define __NOTANIMAL_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class notAnimal 
{
	public:
    	notAnimal ();
    	notAnimal (std::string name);
    	notAnimal (const notAnimal &a);
    	virtual ~notAnimal ();
		notAnimal& operator=(const notAnimal &a);
		virtual void makeSound() const;
		std::string getType() const;
	private:
		std::string type;
};
#endif

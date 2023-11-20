#pragma once
#ifndef __CAT_H__
#define __CAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
	public:
    	Cat ();
    	Cat (const Cat &a);
    	~Cat ();
		Cat& operator=(const Cat &a);
		void makeSound() const;
		Brain* getBrains() const;

	private:
		Brain* brains;
};
#endif

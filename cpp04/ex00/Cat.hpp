#pragma once
#ifndef __CAT_H__
#define __CAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Animal.hpp"
class Cat: public Animal
{
	public:
    	Cat ();
    	Cat (std::string name);
    	Cat (const Cat &a);
    	~Cat ();
		Cat& operator=(const Cat &a);
		void makeSound() const;
	private:
		std::string type;
};
#endif

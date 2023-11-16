#pragma once
#ifndef __Wrong_CAT_H__
#define __Wrong_CAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "WrongAnimal.hpp"
class WrongCat: public WrongAnimal
{
	public:
    	WrongCat ();
    	WrongCat (const WrongCat &a);
    	~WrongCat ();
		WrongCat& operator=(const WrongCat &a);
		void makeSound() const;
};
#endif

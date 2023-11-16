#pragma once
#ifndef __WrongCAT_H__
#define __WrongCAT_H__
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

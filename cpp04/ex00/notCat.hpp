#pragma once
#ifndef __NOTCAT_H__
#define __NOTCAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "notAnimal.hpp"
class notCat: public notAnimal
{
	public:
    	notCat ();
    	notCat (std::string name);
    	notCat (const notCat &a);
    	~notCat ();
		notCat& operator=(const notCat &a);
		void makeSound() const;
	private:
		std::string type;
};
#endif

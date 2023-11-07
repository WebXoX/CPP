#pragma once
#ifndef __CAT_H__
#define __CAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class Cat 
{
	public:
    	Cat ();
    	Cat (std::string name);
    	Cat (const Cat &a);
    	~Cat ();
		Cat& operator=(const Cat &a);
		virtual makeSound();
	protected:
		std::string type;
};
#endif

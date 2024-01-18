#pragma once
#ifndef __C_H__
#define __C_H__
#include "Base.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
/*
/>inherit from bureaucrat
/> Besigned needs to take bureaucrat object
/> Compare tosigned and exc grade variables
*/
class C: public Base
{
    /*VARIABLES*/
	// private:
    /*VARIABLES*/
	public:
	/*orth form*/
    	C ();
    	C (const C &a);
    	~C ();
		C& operator=(const C &a);
	/*orth C*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	/*extra*/
};
// std::ostream& operator<<(std::ostream& os, const C& f);
#endif

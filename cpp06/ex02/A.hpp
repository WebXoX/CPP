#pragma once
#ifndef __A_H__
#define __A_H__
#include "Base.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
// # include <_ctype.h>
/*
/>inherit from bureaucrat
/> Besigned needs to take bureaucrat object
/> Compare tosigned and exc grade variables
*/
class A: public Base
{
    /*VARIABLES*/
	// private:
    /*VARIABLES*/
	public:
	/*orth form*/
	A ();
	A (const A &a);
	~A ();
	A& operator=(const A &a);
	/*orth A*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	/*extra*/
};
// std::ostream& operator<<(std::ostream& os, const A& f);
#endif

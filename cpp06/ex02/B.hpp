#pragma once
#ifndef __B_H__
#define __B_H__
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
class B: public Base
{
    /*VARIABLES*/
	// private:
    /*VARIABLES*/
	public:
	/*orth form*/
	B ();
	B (const B &a);
	~B ();
	B& operator=(const B &a);
	/*orth B*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	/*extra*/
};
// std::ostream& operator<<(std::ostream& os, const B& f);
#endif

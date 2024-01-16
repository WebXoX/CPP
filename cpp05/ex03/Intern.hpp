#pragma once
#ifndef __INTERN_H__
#define __INTERN_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
/*
*/
class Intern
{
	/* VARIABLES*/
	// private:
	
    /* VARIABLES*/

	public:
	/*orth form*/
    	Intern ();
    	Intern (const Intern &a);
    	~Intern ();
		Intern& operator=(const Intern &a);
	/*orth Intern*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	AForm* makeForm(std::string name, std::string target);
	/*extra*/
};
#endif

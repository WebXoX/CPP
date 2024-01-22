#pragma once
#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIAL_PARDONFORM_HPP__
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;
/*
/>inherit from bureaucrat
/> Besigned needs to take bureaucrat object
/> Compare tosigned and exc grade variables
*/
class PresidentialPardonForm:public AForm
{
	public:
	/*orth PresidentialPardonForm*/
    	PresidentialPardonForm ();
    	PresidentialPardonForm (const PresidentialPardonForm &a);
    	~PresidentialPardonForm ();
    	PresidentialPardonForm (std::string target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &a);
	
	/*orth PresidentialPardonForm*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void execute(Bureaucrat const & executor) const;
	/*extra*/
	private:
		const std::string target;
};
std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& f);
#endif

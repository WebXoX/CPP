#pragma once
#ifndef __RobotomyRequestForm_HPP__
#define __RobotomyRequestForm_HPP__
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
class RobotomyRequestForm:public AForm
{
	public:
	/*orth RobotomyRequestForm*/
    	RobotomyRequestForm ();
    	RobotomyRequestForm (const RobotomyRequestForm &a);
    	~RobotomyRequestForm ();
    	RobotomyRequestForm (std::string target);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &a);
	/*orth RobotomyRequestForm*/

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
std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& f);
#endif

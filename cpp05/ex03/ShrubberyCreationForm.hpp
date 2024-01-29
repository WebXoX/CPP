#pragma once
#ifndef __ShrubberyCreationForm_HPP__
#define __ShrubberyCreationForm_HPP__
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm:public AForm
{
	public:
	/*orth ShrubberyCreationForm*/
    	ShrubberyCreationForm ();
    	ShrubberyCreationForm (const ShrubberyCreationForm &a);
    	~ShrubberyCreationForm ();
    	ShrubberyCreationForm (std::string target);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &a);

	/*orth ShrubberyCreationForm*/

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
std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& f);
#endif
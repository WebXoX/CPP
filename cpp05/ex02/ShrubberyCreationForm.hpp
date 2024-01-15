#pragma once
#ifndef __ShrubberyCreationForm_H__
#define __ShrubberyCreationForm_H__
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

		class GradeTooHighException: public std::exception
		{
			public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char* what() const throw();
		};
		class pass: public std::exception
		{
			public:
			virtual const char* what() const throw();
		};
		class fail: public std::exception
		{
			public:
			virtual const char* what() const throw();
		};
	/*exception*/

	/*getters and setters*/

		void 		setSign (bool sign);
		std::string getName() const;
		int 		getGradeSign() const;
		int 		getGradeExc() const;
		bool 		getSign() const;
	/*getters and setters*/
	/*extra*/
		void 		beSigned(const Bureaucrat& a);
	/*extra*/
/*
        *
       /|\
      / | \
     / /|\ \
    / / | \ \
   / / / \ \ \
  /_/ /___\ \_\
   |__|   |__|
       |||

*/
    
	private:
		const std::string target;
};
std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& f);
#endif

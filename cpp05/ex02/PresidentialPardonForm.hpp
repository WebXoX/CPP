#pragma once
#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIAL_PARDONFORM_H__
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
    	PresidentialPardonForm (std::string name, int gradetosign , int gradetoexc);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &a);
	/*orth PresidentialPardonForm*/

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

    
	private:
		const std::string name;
		bool sign;
		const int gradeSign;
		const int gradeExc;
};
std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& f);
#endif

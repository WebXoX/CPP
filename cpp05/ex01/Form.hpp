#pragma once
#ifndef __FORM_HPP__
#define __FORM_HPP__
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
class Form 
{
	public:
	/*orth form*/
    	Form ();
    	Form (const Form &a);
    	~Form ();
    	Form (std::string name, int gradetosign , int gradetoexc);
		Form& operator=(const Form &a);
	/*orth form*/

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
std::ostream& operator<<(std::ostream& os, const Form& f);
#endif

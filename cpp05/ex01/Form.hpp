#pragma once
#ifndef __FORM_H__
#define __FORM_H__
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
		Form& operator=(const Form &a);
	/*orth form*/

    	Form (std::string name, int gradetosign , int gradetoexc);

		class GradeTooHighException: public std::exception
		{
			public:
			virtual const char* what() const _NOEXCEPT;
		};
		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char* what() const _NOEXCEPT;
		};
		void 		setSign (bool sign);
		std::string getName() const;
		int 		getGradeSign() const;
		int 		getGradeExc() const;
		bool 		getSign() const;
		void 		beSigned(const Bureaucrat& a);

    
	private:
		const std::string name;
		bool sign;
		const int gradeSign;
		const int gradeExc;
};
std::ostream& operator<<(std::ostream& os, const Form& f);
#endif

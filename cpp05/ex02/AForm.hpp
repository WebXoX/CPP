#pragma once
#ifndef __AFORM_HPP__
#define __AFORM_HPP__
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
class AForm 
{
	public:
	/*orth form*/
    	AForm ();
    	AForm (const AForm &a);
    	virtual ~AForm () = 0;
    	AForm (std::string name, int gradetosign , int gradetoexc);
		AForm& operator=(const AForm &a);
	/*orth Aform*/

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
		virtual void execute(Bureaucrat const & executor) const = 0;
	/*extra*/

    
	private:
		const std::string 	name;
		bool				sign;
		const int			gradeSign;
		const int			gradeExc;
};
std::ostream& operator<<(std::ostream& os, const AForm& f);
#endif

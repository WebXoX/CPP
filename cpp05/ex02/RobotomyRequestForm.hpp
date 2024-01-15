#pragma once
#ifndef __RobotomyRequestForm_H__
#define __RobotomyRequestForm_H__
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
    	RobotomyRequestForm (std::string name, int gradetosign , int gradetoexc);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &a);
	/*orth RobotomyRequestForm*/

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

    
	// private:
	// 	const std::string name;
	// 	bool sign;
	// 	const int gradeSign;
	// 	const int gradeExc;
};
std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& f);
#endif

#pragma once
#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Form.hpp"
class Form;

class Bureaucrat 
{
	public:
	/*orth form*/
    	Bureaucrat ();
    	Bureaucrat (const Bureaucrat &a);
    	~Bureaucrat ();
		Bureaucrat& operator=(const Bureaucrat &a);
	/*orth form*/

    	Bureaucrat (std::string name, int grade);
		void gradeupgrade();
		void gradedowngrade();

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
		void 		setGrade (int grade);
		std::string getName() const;
		int 		getGrade() const;
		void 		signForm(const Form & form) const;

    
	private:
		const std::string name;
		int grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);
#endif

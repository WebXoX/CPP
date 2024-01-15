#pragma once
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
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
			virtual const char* what() const _NOEXCEPT;
		};
		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char* what() const _NOEXCEPT;
		};
		void 		setGrade (int grade);
		std::string getName() const;
		int 		getGrade() const;

    
	private:
		const std::string name;
		int grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);
#endif

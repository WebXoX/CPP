#pragma once
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
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
		Bureaucrat& operator++();
		Bureaucrat& operator--();

		class GradeTooHighException: public std::exception
		{
			public:
			GradeTooHighException() noexcept = default;
			~GradeTooHighException() = default
			virtual const char what() const noexcept
			{
				return "Grade is too high( greater then 150)"
			}
		}
		class GradeTooLowException: public std::exception
		{
			public:
			GradeTooLowException() noexcept = default;
			~GradeTooLowException() = default
			virtual const char what() const noexcept
			{
				return "Grade is too low( lesser then 1)"		
			}
		}
		std::string getName() const;
		int getGrade() const;

    
	private:
		std::string name;
		// const std::string name;
		int grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);
#endif

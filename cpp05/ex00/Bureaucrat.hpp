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
		getName();
		getGrade();
		Bureaucrat& Bureaucrat::operator++()
		Bureaucrat& Bureaucrat::operator--()

    
	private:
		const std::string name;
		int grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);
#endif

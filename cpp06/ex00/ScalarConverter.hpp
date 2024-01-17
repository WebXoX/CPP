#pragma once
#ifndef __FORM_H__
#define __FORM_H__
#include <iostream>
#include <string>
#include <stdlib.h>

/*
/>inherit from bureaucrat
/> Besigned needs to take bureaucrat object
/> Compare tosigned and exc grade variables
*/
class ScalarConverter 
{

    /*VARIABLES*/
	// private:
	
    /*VARIABLES*/

	public:
	/*orth form*/
    	ScalarConverter ();
    	ScalarConverter (const ScalarConverter &a);
    	~ScalarConverter ();
    	ScalarConverter (std::string name, int gradetosign , int gradetoexc);
		ScalarConverter& operator=(const ScalarConverter &a);
	/*orth ScalarConverter*/

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
	/*getters and setters*/
	/*extra*/
	static void convert(std::string str);
	static int charPos(std::string str);

	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const ScalarConverter& f);
#endif

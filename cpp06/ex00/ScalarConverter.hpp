#pragma once
#ifndef __SCALARCONVERTER_H__
#define __SCALARCONVERTER_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
// # include <_ctype.h>
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

	private:
	/*orth form*/
    	ScalarConverter ();
    	ScalarConverter (const ScalarConverter &a);
    	~ScalarConverter ();
		ScalarConverter& operator=(const ScalarConverter &a);
	/*orth ScalarConverter*/

	/*exception*/
	/*exception*/

	/*getters and setters*/
	/*getters and setters*/
	public:
	/*extra*/
		static void convert(std::string str);
		static int 	isFNumb(std::string str);
		static bool wordException(std::string str);
		static bool isAscii(long c);
		static bool	isprintable(long c);
		static int 	isChar(std::string str);

	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const ScalarConverter& f);
#endif

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
	Bureaucrat rob = Bureaucrat("rob",1);
	Bureaucrat nobs = Bureaucrat("nobs",151);
	// AForm 		grader = AForm("eco",50,60);
	std::cout << rob;
	std::cout << nobs;

	try
	{
		// std::cout << grader;
		// grader.beSigned(rob);
		// grader.beSigned(nobs);
		// nobs.signForm(grader);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
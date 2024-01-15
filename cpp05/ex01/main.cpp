#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
	Bureaucrat rob = Bureaucrat("rob",1);
	Bureaucrat nobs = Bureaucrat("nobs",151);
	Form 		grader = Form("eco",50,60);
	std::cout << rob;
	std::cout << nobs;

	try
	{
		std::cout << grader;
		grader.beSigned(rob);
		grader.beSigned(nobs);
		nobs.signForm(grader);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
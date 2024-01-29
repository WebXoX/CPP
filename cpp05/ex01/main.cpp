#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
	std::cout << " // creation"<< std::endl;

	Bureaucrat rob = Bureaucrat("rob",1);
	Bureaucrat robs = Bureaucrat("robs",49);
	Bureaucrat nobs = Bureaucrat("nobs",151);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " // creation of form"<< std::endl;
	Form 		grader = Form("eco",50,60);
	std::cout << grader.getSign();
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << " // bureaucrat values"<< std::endl;
	
	// std::cout << rob;
	// std::cout << nobs;

	// try
	// {
	// 	std::cout << grader;
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << " // signing"<< std::endl;
	// 	// grader.beSigned(rob);
		
	// 	grader.beSigned(robs);
	// 	robs.signForm(grader);
	// 	std::cout << std::endl;
	// 	std::cout << std::endl;
	// 	std::cout << " // did not pass"<< std::endl;
	// 	grader.beSigned(nobs);
	// 	nobs.signForm(grader);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	std::cout << " // creation"<< std::endl;
	Bureaucrat rob = Bureaucrat("rob",1);
	Bureaucrat nobs = Bureaucrat("nobs",150);
	Form form1 = Form(":1", 1, 1);
	std::cout << " // error"<< std::endl;

	Bureaucrat bob = Bureaucrat("bob",-1);
	Bureaucrat nob = Bureaucrat("nob",155);
	std::cout << " // error"<< std::endl;

	std::cout << " // creation"<< std::endl;

	std::cout << bob;
	std::cout << nob;
	std::cin.get();

	try
	{
		Form form3 = Form(":1", 151, -1);
		std::cout << rob;
		rob.gradeupgrade();
		std::cout << rob;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<rob;
	try
	{
		std::cout << nobs;
		nobs.gradedowngrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << nobs;
	std::cin.get();
	
	try
	{
		std::cout << nobs;
		std::cout <<rob << std::endl << std::endl;
		form1.beSigned(rob);
		rob.signForm(form1);
		form1.beSigned(nobs);
		nobs.signForm(form1);
		std::cout << std::endl;
		std::cout <<rob;
		std::cout << nobs;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
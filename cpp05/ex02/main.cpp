#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
	std::cout << " // creation"<< std::endl;

	Bureaucrat rob = Bureaucrat("rob",10);
	Bureaucrat error= Bureaucrat("rob",-1);
	std::cout << "\n//145 75"<< std::endl;

	ShrubberyCreationForm  		grader = ShrubberyCreationForm("eco");
	std::cout << "\n//25 5"<< std::endl;
	PresidentialPardonForm  		grader1 = PresidentialPardonForm("acc");
	std::cout << "\n//73 45"<< std::endl;

	RobotomyRequestForm	grader2 = RobotomyRequestForm("bst");
	std::cout << rob;
	// std::cout << nobs;

	try
	{
		grader.beSigned(rob);
		grader1.beSigned(rob);
		grader2.beSigned(rob);
		grader.execute(rob);
		std::cout << std::endl;
		rob.executeForm(grader);
		std::cout << std::endl;
		rob.executeForm(grader1);
		std::cout << std::endl;
		rob.executeForm(grader2);
		std::cout << "\n //error" << std::endl;
		grader.beSigned(error);
		grader1.beSigned(error);
		grader2.beSigned(error);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "\n //error" << std::endl;
		std::cout << std::endl;
		error.executeForm(grader);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
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
	Bureaucrat rob = Bureaucrat("rob",10);
	// Bureaucrat nobs = Bureaucrat("nobs",151);
	// AForm 		grader = AForm("eco",50,60);
	ShrubberyCreationForm  		grader = ShrubberyCreationForm("eco");
	PresidentialPardonForm  		grader1 = PresidentialPardonForm("eco");
	RobotomyRequestForm  		grader2 = RobotomyRequestForm("eco");
	std::cout << rob;
	// std::cout << nobs;

	try
	{
		grader.beSigned(rob);
		grader1.beSigned(rob);
		grader2.beSigned(rob);
		// grader.execute(rob);
		rob.executeForm(grader);
		rob.executeForm(grader1);
		rob.executeForm(grader2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
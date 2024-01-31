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
	Bureaucrat rob = Bureaucrat("rob",1);
	Bureaucrat nobs = Bureaucrat("nobs",150);
	PresidentialPardonForm form1 = PresidentialPardonForm(":1");
	ShrubberyCreationForm form2 = ShrubberyCreationForm(":2");
	RobotomyRequestForm form3 = RobotomyRequestForm(":3");
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
		rob.executeForm(form1);
		form1.execute(rob);
		form1.beSigned(nobs);
		nobs.signForm(form1);
		nobs.executeForm(form1);
		form1.execute(nobs);
		std::cout << std::endl << std::endl;
		std::cout <<rob;
		std::cout << nobs;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		std::cout << nobs;
		std::cout <<rob << std::endl << std::endl;
		form2.beSigned(rob);
		rob.signForm(form2);
		rob.executeForm(form2);
		form2.execute(rob);
		form2.beSigned(nobs);
		nobs.signForm(form2);
		nobs.executeForm(form2);
		form2.execute(nobs);
		std::cout << std::endl << std::endl;
		std::cout <<rob;
		std::cout << nobs;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << nobs;
		std::cout <<rob << std::endl << std::endl;
		form3.beSigned(rob);
		rob.signForm(form3);
		rob.executeForm(form3);
		form3.execute(rob);
		std::cin.get();
		form3.execute(rob);
		std::cin.get();
		form3.execute(rob);
		std::cin.get();
		form3.execute(rob);
		std::cin.get();
		std::cout<<"rob 50 %^" << std::endl;
		form3.beSigned(nobs);
		nobs.signForm(form3);
		nobs.executeForm(form3);
		form3.execute(nobs);
		std::cout << std::endl << std::endl;
		std::cout <<rob;
		std::cout << nobs;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
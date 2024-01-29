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

	
	{
		try
		{
			Bureaucrat rob = Bureaucrat("rob",10);
			PresidentialPardonForm form1 = PresidentialPardonForm(":1");
			form1.execute(rob);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cin.get();
	}
	{
		try
		{
			Bureaucrat rob = Bureaucrat("rob",149);
			PresidentialPardonForm form1 = PresidentialPardonForm(":1");
			RobotomyRequestForm form2 = RobotomyRequestForm(":2");
			ShrubberyCreationForm form3 = ShrubberyCreationForm(":3");
			form1.beSigned(rob);
			form1.execute(rob);
			form2.beSigned(rob);
			form2.execute(rob);
			form3.beSigned(rob);
			form3.execute(rob);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cin.get();
	}
	{
		try
		{
			Bureaucrat rob = Bureaucrat("rob",10);
			PresidentialPardonForm form1 = PresidentialPardonForm(":1");
			RobotomyRequestForm form2 = RobotomyRequestForm(":2");
			ShrubberyCreationForm form3 = ShrubberyCreationForm(":3");
			form1.beSigned(rob);
			form1.execute(rob);
			form2.beSigned(rob);
			form2.execute(rob);
			form3.beSigned(rob);
			form3.execute(rob);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cin.get();
	}
}
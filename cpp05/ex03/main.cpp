#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
	Intern someRandomIntern;
	Bureaucrat bob = Bureaucrat("bob", 1);
	AForm* rrf;
	std::cout << " // creation"<< std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "mac");
	delete rrf;		
	rrf = someRandomIntern.makeForm("presidential pardon", "donald");
	delete rrf;
	std::cout << " // wrong input"<< std::endl;
	rrf = someRandomIntern.makeForm("cat", "kit");
	std::cout << " // creation"<< std::endl;
	delete rrf;
	std::cout <<std::endl << std::endl;

	std::cout << " // final creation"<< std::endl;
	rrf = someRandomIntern.makeForm("presidential pardon", "donald");
	std::cout <<std::endl << std::endl;

		try
		{
			rrf->beSigned(bob);
			bob.signForm(*rrf);
			rrf->execute(bob);
			bob.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete rrf;		
}
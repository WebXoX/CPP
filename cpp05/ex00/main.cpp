#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{
	Bureaucrat rob = Bureaucrat("rob",1);
	Bureaucrat bob = Bureaucrat("bob",-1);
	Bureaucrat nob = Bureaucrat("nob",155);
	Bureaucrat nobs = Bureaucrat("nobs",150);

	std::cout << bob;
	std::cout << nob;

	try
	{
		std::cout << rob;
		// rob.gradedowngrade();
		rob.gradeupgrade();
		std::cout << rob;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// try
	// {
	// 	std::cout << bob;	
	// 	bob.gradeupgrade();
	// 	std::cout << bob;	
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try 
	// {
	// 	std::cout << nob;
	// 	nob.gradeupgrade();
	// 	std::cout << nob;	
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	std::cout << nobs;
	// 	nobs.gradeupgrade();
	// 	std::cout << nobs;
	// 	nobs.gradedowngrade();
	// 	std::cout << nobs;
	// 	nobs.gradedowngrade();
	// 	std::cout << nobs;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}
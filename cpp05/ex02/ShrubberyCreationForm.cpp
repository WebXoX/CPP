#include "ShrubberyCreationForm.hpp"
/* orth ShrubberyCreationForm / constructor*/
ShrubberyCreationForm::ShrubberyCreationForm (): AForm("ShrubberyCreationForm" , 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm (std::string target):AForm("ShrubberyCreationForm" , 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &a):AForm(a.getName() , a.getGradeSign(), a.getGradeExc()), target(a.target)
{
	// *this = a;
        std::cout << "ShrubberyCreationForm copy constructor " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm ()
{
	std::cout << "ShrubberyCreationForm distructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
    if (this != &rhs)
    {
        std::cout << "ShrubberyCreationForm copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth ShrubberyCreationForm */


/* getters */
/* Exceptions */
/* Exceptions */

/* extra */

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
	if (executor.getGrade() < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	if (this->getSign() == false)
		throw ShrubberyCreationForm::fail();

	std::ofstream outfile;
	std::string name = this->target+"_shrubbery";
	outfile.open(name.c_str());

	outfile << "	    *       " << std::endl;
	outfile << "       /|\\      " << std::endl;
	outfile << "      / | \\     " << std::endl;
	outfile << "     / /|\\ \\    " << std::endl;
	outfile << "    / / | \\ \\   " << std::endl;
	outfile << "   / / / \\ \\ \\  " << std::endl;
	outfile << "  /_/ /___\\ \\_\\ " << std::endl;
	outfile << "   |__|   |__|  " << std::endl;
	outfile << "       |||      " << std::endl;
	outfile.close();
}

/* extra */


std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& f)
{
	try
	{
		os<< f.getName() << " , ShrubberyCreationForm gradesign "<< f.getGradeSign()<<". "  << " , ShrubberyCreationForm gradesign "<< f.getGradeExc()<<". "<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return os;
	}
	return os;
}
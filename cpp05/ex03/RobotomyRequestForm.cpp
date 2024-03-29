#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>
/* orth form / constructor*/
RobotomyRequestForm::RobotomyRequestForm (): AForm("RobotomyRequestForm" , 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (std::string target): AForm("RobotomyRequestForm" , 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a):AForm(a.getName() , a.getGradeSign(), a.getGradeExc()), target(a.target)
{
	std::cout << "RobotomyRequestForm copy constructor " << std::endl;
	// *this = a;
}

RobotomyRequestForm::~RobotomyRequestForm ()
{
	std::cout << "RobotomyRequestForm distructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    if (this != &rhs)
    {
        std::cout << "RobotomyRequestForm copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth form */

/* getters */


/* getters */
/* Exceptions */
/* Exceptions */

/* extra */
void  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 150)
		throw RobotomyRequestForm::GradeTooLowException();
	if (executor.getGrade() < 1)
		throw RobotomyRequestForm::GradeTooHighException();
	if (this->getSign() == false)
		throw RobotomyRequestForm::fail();
	std::srand(static_cast<unsigned>(std::time(0)));
	if ((int)rand()%2 == 1)
		std::cout << this->target <<" has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " robotomy failed." << std::endl;
}
/* extra */


std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& f)
{
	try
	{
		os<< f.getName() << " , form gradesign "<< f.getGradeSign()<<". "  << " , form gradesign "<< f.getGradeExc()<<". "<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return os;
	}
	return os;
}
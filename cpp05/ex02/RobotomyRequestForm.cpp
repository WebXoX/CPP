#include "AForm.hpp"
/* orth form / constructor*/
RobotomyRequestForm::RobotomyRequestForm (): AForm("ShrubberyCreationForm" , 72, 45)
{
	std::cout << "Form default constructor" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm (std::string target): AForm("ShrubberyCreationForm" , 72, 45), target(target)
{
	std::cout << "Form constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a): AForm("ShrubberyCreationForm" , 72, 45)
{
        std::cout << "Form copy constructor " << std::endl;
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
int RobotomyRequestForm::getGradeSign () const
{
	if ( this->gradeSign < 1 )
		throw RobotomyRequestForm::GradeTooHighException();

	if ( this->gradeSign > 150 )
		throw RobotomyRequestForm::GradeTooLowException();
	return(this->gradeSign);
}

int RobotomyRequestForm::getGradeExc () const
{
	if ( this->gradeExc < 1 )
		throw RobotomyRequestForm::GradeTooHighException();

	if ( this->gradeExc > 150 )
		throw RobotomyRequestForm::GradeTooLowException();
	return(this->gradeExc);
}
bool RobotomyRequestForm::getSign () const
{
	return this->sign;
}
std::string RobotomyRequestForm::getName () const
{
	return(this->name);
}
std::string RobotomyRequestForm::getTarget () const
{
	return(this->target);
}
/* getters */
/* Exceptions */

const char* RobotomyRequestForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high( LESSER then 1)";
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low( MORE then 150)";	
}
/* Exceptions */

/* extra */
void RobotomyRequestForm::beSigned( const Bureaucrat& a)
{
	if (a.getGrade() <= this->gradeSign)
		this->sign = true;
	else 
		this->sign = false;
}

void  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 150)
		throw RobotomyRequestForm::GradeTooLowException();
	if (executor.getGrade() < 1)
		throw RobotomyRequestForm::GradeTooHighException();
	if (this->sign == false)
		throw RobotomyRequestForm::fail();
	if ((int)rand()/1 == 1)
		std::cout << this->getTarget() <<" has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " robotomy failed." << std::endl;
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
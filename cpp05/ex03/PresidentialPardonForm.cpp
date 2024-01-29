#include "PresidentialPardonForm.hpp"
/* orth PresidentialPardonForm / constructor*/
PresidentialPardonForm::PresidentialPardonForm (): AForm("PresidentialPardonForm" , 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (std::string target): AForm("PresidentialPardonForm" , 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a):AForm(a.getName() , a.getGradeSign(), a.getGradeExc()), target(a.target)
{
	std::cout << "PresidentialPardonForm copy constructor " << std::endl;
	// *this = a;
}

PresidentialPardonForm::~PresidentialPardonForm ()
{
	std::cout << "PresidentialPardonForm distructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    if (this != &rhs)
    {
        std::cout << "PresidentialPardonForm copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth PresidentialPardonForm */

/* getters */
/* getters */
/* Exceptions */
/* Exceptions */

/* extra */
void  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 150)
		throw PresidentialPardonForm::GradeTooLowException();
	if (executor.getGrade() < 1)
		throw PresidentialPardonForm::GradeTooHighException();
	if (this->getSign() == false)
	{
		throw PresidentialPardonForm::fail();
	}
		std::cout << this->target <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
}
/* extra */
std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& f)
{
	try
	{
		os<< f.getName() << " , PresidentialPardonForm gradesign "<< f.getGradeSign()<<". "  << " , PresidentialPardonForm gradesign "<< f.getGradeExc()<<". "<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return os;
	}
	return os;
}
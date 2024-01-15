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

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a): AForm("PresidentialPardonForm" , 25, 5)
{
        std::cout << "PresidentialPardonForm copy constructor " << std::endl;
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
int PresidentialPardonForm::getGradeSign () const
{
	if ( this->gradeSign < 1 )
		throw PresidentialPardonForm::GradeTooHighException();

	if ( this->gradeSign > 150 )
		throw PresidentialPardonForm::GradeTooLowException();
	return(this->gradeSign);
}

int PresidentialPardonForm::getGradeExc () const
{
	if ( this->gradeExc < 1 )
		throw PresidentialPardonForm::GradeTooHighException();

	if ( this->gradeExc > 150 )
		throw PresidentialPardonForm::GradeTooLowException();
	return(this->gradeExc);
}
bool PresidentialPardonForm::getSign () const
{
	return this->sign;
}
std::string PresidentialPardonForm::getName () const
{
	return(this->name);
}
/* getters */
/* Exceptions */

const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high( LESSER then 1)";
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low( MORE then 150)";	
}
/* Exceptions */

/* extra */
void PresidentialPardonForm::beSigned( const Bureaucrat& a)
{
	if (a.getGrade() <= this->gradeSign)
		this->sign = true;
	else 
		this->sign = false;
}


void  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 150)
		throw PresidentialPardonForm::GradeTooLowException();
	if (executor.getGrade() < 1)
		throw PresidentialPardonForm::GradeTooHighException();
	if (this->sign == false)
		throw PresidentialPardonForm::fail();
		std::cout << this->getTarget() <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
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
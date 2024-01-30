#include "AForm.hpp"
/* orth AForm / constructor*/
AForm::AForm (): name("default"), sign(false), gradeSign(50), gradeExc(60)
{
	std::cout << "AForm default constructor" << std::endl;

}

AForm::AForm (std::string name, int gradetosign , int gradetoexc): name(name), sign(false) , gradeSign(gradetosign), gradeExc(gradetoexc)
{
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm (const AForm &a): name(a.getName()), sign(false), gradeSign(a.getGradeSign()), gradeExc(a.getGradeExc())
{
        std::cout << "AForm copy constructor " << std::endl;
}

AForm::~AForm ()
{
	std::cout << "AForm distructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& rhs)
{
    if (this != &rhs)
    {
        std::cout << "AForm copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth AForm */

/* getters */
void 		AForm::setSign (bool sign)
{
	this->sign = sign;
}

int AForm::getGradeSign () const
{
	if ( this->gradeSign < 1 )
		throw AForm::GradeTooHighException();

	if ( this->gradeSign > 150 )
		throw AForm::GradeTooLowException();
	return(this->gradeSign);
}

int AForm::getGradeExc () const
{
	if ( this->gradeExc < 1 )
		throw AForm::GradeTooHighException();

	if ( this->gradeExc > 150 )
		throw AForm::GradeTooLowException();
	return(this->gradeExc);
}
bool AForm::getSign () const
{
	return this->sign;
}
std::string AForm::getName () const
{
	return(this->name);
}
/* getters */
/* Exceptions */

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high( LESSER then 1)";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low( MORE then 150)";	
}

const char* AForm::fail::what() const throw()
{
	return "Failed to meet requirements";	
}
/* Exceptions */

/* extra */
void AForm::beSigned( const Bureaucrat& a)
{
	if (a.getGrade() <= this->gradeSign)
		this->sign = true;
	else 
		this->sign = false;
}
/* extra */


std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	try
	{
		os<< f.getName() << " , AForm gradesign "<< f.getGradeSign()<<". "  << " , AForm gradesign "<< f.getGradeExc()<<". "<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return os;
	}
	return os;
}
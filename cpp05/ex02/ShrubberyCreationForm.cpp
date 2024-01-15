#include "ShrubberyCreationForm.hpp"
/* orth ShrubberyCreationForm / constructor*/
ShrubberyCreationForm::ShrubberyCreationForm (): name("default") , gradeSign(50), gradeExc(60)
{
	std::cout << "ShrubberyCreationForm default constructor" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm (std::string name, int gradetosign , int gradetoexc): name(name) , gradeSign(gradetosign), gradeExc(gradetoexc)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &a): name(a.getName()) , gradeSign(a.getGradeSign()), gradeExc(a.getGradeExc())
{
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
int ShrubberyCreationForm::getGradeSign () const
{
	if ( this->gradeSign < 1 )
		throw ShrubberyCreationForm::GradeTooHighException();

	if ( this->gradeSign > 150 )
		throw ShrubberyCreationForm::GradeTooLowException();
	return(this->gradeSign);
}

int ShrubberyCreationForm::getGradeExc () const
{
	if ( this->gradeExc < 1 )
		throw ShrubberyCreationForm::GradeTooHighException();

	if ( this->gradeExc > 150 )
		throw ShrubberyCreationForm::GradeTooLowException();
	return(this->gradeExc);
}
bool ShrubberyCreationForm::getSign () const
{
	return this->sign;
}
std::string ShrubberyCreationForm::getName () const
{
	return(this->name);
}
/* getters */
/* Exceptions */

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high( LESSER then 1)";
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low( MORE then 150)";	
}
/* Exceptions */

/* extra */
void ShrubberyCreationForm::beSigned( const Bureaucrat& a)
{
	if (a.getGrade() <= this->gradeSign)
		this->sign = true;
	else 
		this->sign = false;
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
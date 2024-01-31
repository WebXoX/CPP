#include "Form.hpp"
/* orth form / constructor*/
	Form::Form (): name("default") , gradeSign(50), gradeExc(60)
	{
		std::cout << "Form default constructor" << std::endl;
		this->getGradeSign();
		this->getGradeExc();
	}

	Form::Form (std::string name, int gradetosign , int gradetoexc): name(name) , gradeSign(gradetosign), gradeExc(gradetoexc)
	{
		std::cout << "Form constructor called" << std::endl;
		this->getGradeSign();
		this->getGradeExc();	
	}

	Form::Form (const Form &a): name(a.getName()) , gradeSign(a.getGradeSign()), gradeExc(a.getGradeExc())
	{
		std::cout << "Form copy constructor " << std::endl;
		this->getGradeSign();
		this->getGradeExc();
	}

	Form::~Form ()
	{
		std::cout << "Form distructor called" << std::endl;
	}

	Form& Form::operator=(const Form& rhs)
	{
		if (this != &rhs)
		{
			std::cout << "Form copy assignment operator = " << std::endl;
			*this = rhs;
			this->getGradeSign();
			this->getGradeExc();
		}
		return *this;
	}
/* orth form */

/* getters */
	int Form::getGradeSign () const
	{
		if ( this->gradeSign < 1 )
			throw Form::GradeTooHighException();

		if ( this->gradeSign > 150 )
			throw Form::GradeTooLowException();
		return(this->gradeSign);
	}

	int Form::getGradeExc () const
	{
		if ( this->gradeExc < 1 )
			throw Form::GradeTooHighException();

		if ( this->gradeExc > 150 )
			throw Form::GradeTooLowException();
		return(this->gradeExc);
	}
	bool Form::getSign () const
	{
		return this->sign;
	}
	std::string Form::getName () const
	{
		return(this->name);
	}
/* getters */
/* Exceptions */

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high( LESSER then 1)";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low( MORE then 150)";	
}
/* Exceptions */

/* extra */
void Form::beSigned( const Bureaucrat& a)
{
	if (a.getGrade() <= this->gradeSign)
		this->sign = true;
	else 
		this->sign = false;
}
/* extra */


std::ostream& operator<<(std::ostream& os, const Form& f)
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
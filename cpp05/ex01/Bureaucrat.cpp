#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ()
{
	std::cout << "Bureaucrat default constructor" << std::endl;

}
Bureaucrat::Bureaucrat (std::string name, int grade): name(name)
{
	try 
	{
		setGrade(grade);
	}
	catch ( std::exception &ex )
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "Bureaucrat constructor called" << std::endl;
}
Bureaucrat::Bureaucrat (const Bureaucrat &a)
{
	if (this != &a)
    {
        std::cout << "Bureaucrat copy constructor " << std::endl;
		*this = a;
    }
}

Bureaucrat::~Bureaucrat ()
{
	std::cout << "Bureaucrat distructor called" << std::endl;
}

void Bureaucrat::setGrade (int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

int Bureaucrat::getGrade () const
{
	if ( this->grade < 1 )
		throw Bureaucrat::GradeTooHighException();

	if ( this->grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	return(this->grade);
}
std::string Bureaucrat::getName () const
{
	return(this->name);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if (this != &rhs)
    {
        std::cout << "Bureaucrat copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high( LESSER then 1)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low( MORE then 150)";	
}
void Bureaucrat::gradeupgrade()
{
	if (this->grade - 1 < 1)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->grade--;
}

void Bureaucrat::gradedowngrade()
{
	if (this->grade + 1 > 150)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->grade++;
}
void 		Bureaucrat::signForm( const Form &form) const
{
	if ( form.getSign() == true)
		std::cout << this->name << " signed "<< this->getName() << std::endl;
	else
		std::cout <<  this->name << " couldn’t sign "<< form.getName() << " as they failed meet the passing grade" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& f)
{
	try
	{
		os<< f.getName() << " , bureaucrat grade "<< f.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return os;
	}
	return os;
}
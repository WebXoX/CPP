#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ()
{
	std::cout << "Bureaucrat default constructor" << std::endl;

}
Bureaucrat::Bureaucrat (std::string name, int grade): name(name), grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}
Bureaucrat::Bureaucrat (const Bureaucrat &a): name( a.name), grade( a.grade)
{
}

Bureaucrat::~Bureaucrat ()
{
	std::cout << "Bureaucrat distructor called" << std::endl;
}
int Bureaucrat::getGrade () const
{
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
        this->name = rhs.getName();
        this->grade = rhs.getGrade();
        std::cout << "Bureaucrat copy assignment operator = " << std::endl;
    }
    return *this;
}

Bureaucrat& Bureaucrat::operator++()
{
	std::cout << "Fixed copy assignment operator ++" << std::endl;
	
	this->grade--;
	return(*this);
}

Bureaucrat& Bureaucrat::operator--()
{
	std::cout << "Fixed copy assignment operator ++" << std::endl;
	
	this->grade++;
	return(*this);
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f)
{
	os<< f.getName() << ", bureaucrat grade"<< f.getGrade()<<".";
	return os;
}
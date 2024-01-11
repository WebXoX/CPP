#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ()
{
	std::cout << "Bureaucrat default constructor" << std::endl;

}
Bureaucrat::Bureaucrat (std::string name, int grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->name = name;
	this->grade = grade;
}
Bureaucrat::Bureaucrat (const Bureaucrat &a)
{
	*this=(a);
}
Bureaucrat::~Bureaucrat ()
{
	std::cout << "Bureaucrat distructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	// delete this;
	std::cout << "Bureaucrat copy assignment operator = " << std::endl;
	this->type =(rhs.getType());
	return(*this);
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
#include "Intern.hpp"

/* orth Intern / constructor*/
Intern::Intern ()
{
	std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern (const Intern &a)
{
	std::cout << "Intern copy constructor " << std::endl;
	*this = a;
}

Intern::~Intern ()
{
	std::cout << "Intern distructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& rhs)
{
    if (this != &rhs)
    {
        std::cout << "Intern copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth Intern */
/*extra*/
AForm * Intern::makeForm(std::string name, std::string target)
{
	std::string str[3] ={ "robotomy request","presidential pardon","shrubbery creation"};
	int i = 0;
	while (name.empty() == false && i<3 && name.compare(str[i]) != 0)
	{
		i++;
	}
	i++;
	switch (i)
	{
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
			break;
		case 3:
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Intern can't create this form" << std::endl;
			break;
	}
	return (NULL);
}
/*extra*/
#include "Brain.hpp"

Brain::Brain ()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain (const Brain &a)
{
	// for (size_t i = 0; a.getIdeas()[i].empty() != 0 && i <100; i++)
	// {
	// 		this->ideas[i] = a.getIdeas()[i];
	// }
	*this  =  a;
}

Brain::~Brain ()
{
	std::cout << "Brain distructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assignment operator = " << std::endl;
	*this= (rhs);
	return(*this);
}

std::string *Brain::getIdeas(void) 
{
	return (this->ideas);
}

void Brain::setIdeas(std::string ideas, int index) 
{
	this->ideas[index] =  ideas;
}
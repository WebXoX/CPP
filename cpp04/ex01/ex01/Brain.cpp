#include "Brain.hpp"

Brain::Brain ()
{
	ideas = new std::string[100];
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain (const Brain &a)
{
	for (size_t i = 0; a.ideas[i].empty() != 0 && i <100; i++)
	{
			this->ideas[i] = a.ideas[i];
	}
	*this  =  a;
}

Brain::~Brain ()
{
	// delete[] this->ideas;
	std::cout << "Brain distructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
	// delete this;
	std::cout << "Brain copy assignment operator = " << std::endl;
	for (size_t i = 0;rhs.ideas[i].empty() != 0 && i <100; i++)
	{
			this->ideas[i] =rhs.ideas[i];
	}
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
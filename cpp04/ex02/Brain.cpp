#include "Brain.hpp"

Brain::Brain ()
{
	this->ideas = new std::string[100];
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain (const Brain &a)
{
	std::cout << "Brain copy constructor " << std::endl;
	const std::string *save = a.getIdeas(); 
	this->ideas = new std::string[100];
	for (size_t i = 0;i <100; i++)
	{

			this->ideas[i] = (save[i]);
	}
}

Brain::~Brain ()
{
	delete[] this->ideas;
	std::cout << "Brain distructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
	const std::string *save = rhs.getIdeas(); 
	std::cout << "Brain copy assignment operator = " << std::endl;
	for (size_t i = 0;i <100; i++)
	{
		this->ideas[i] =save[i];
	}
	return(*this);
}

std::string *Brain::getIdeas(void) const
{
	return (this->ideas);
}

void Brain::setIdeas(std::string ideas, int index) 
{
	this->ideas[index] =  ideas;
}
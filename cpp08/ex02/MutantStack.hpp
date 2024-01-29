#pragma once
#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <deque>

template < typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

    /*VARIABLES*/
	public:
    	typedef typename Container::iterator iterator;
    /*VARIABLES*/

	/*orth form*/
		MutantStack () : std::stack<T, Container>()
		{
			std::cout << "MutantStack default constructor" << std::endl;
		}
		MutantStack (const MutantStack &a) : std::stack<T, Container>(a)
		{
			std::cout << "MutantStack copy constructor " << std::endl;
		}
		virtual ~MutantStack ()
		{
			std::cout << "MutantStack distructor called" << std::endl;
		}
		MutantStack& operator=(const MutantStack& rhs)
		{
			if (this != &rhs)
			{
				std::stack<T, Container>::operator=(rhs);
			}
			return *this;
		}
	/*orth MutantStack*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	public:
		iterator begin()
		{
			return(this->c.begin());
		}
		iterator end()
		{
			return(this->c.end());
		}
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const MutantStack& f);
#endif

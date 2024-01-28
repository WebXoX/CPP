#pragma once
#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
template <typename T>
class MutantStack: public std::stack<T>
{

    /*VARIABLES*/
	public:
    	typename std::stack<T>::container_type::iterator stacks;
    	typename std::stack<T>::container_type::const_iterator cstacks;

    /*VARIABLES*/

	/*orth form*/
	/*orth MutantStack*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		std::stack<T> begin()
		{
			return(this->stacks[0]);
		}
		std::stack<T> end()
		{
			return(this->cstacks + this->cstacks.size());
		}
		std::stack<T>& operator++()
		{
			this->cstacks++;
			return this->cstacks;
		}
		
		std::stack<T>& operator++(const std::stack<T>& rhs)
		{
			std::stack<T> temp;
			temp = this->cstacks;
			this->cstacks++;
			return(temp);
		}
			std::stack<T>& operator--()
		{
			this->cstacks--;
			return this->cstacks;
		}
		
		std::stack<T>& operator--(const std::stack<T>& rhs)
		{
			std::stack<T> temp;
			temp = this->cstacks;
			this->cstacks--;
			return(temp);
		}
		

		std::stack<T> begin()
		{
			return(this->cstacks[0]);
		}
		std::stack<T> end()
		{
			return(this->cstacks + this->cstacks.size());
		}

		std::stack<T>& operator++()
		{
			this->cstacks++;
			return this->cstacks;
		}
		
		std::stack<T>& operator++(const std::stack<T>& rhs)
		{
			std::stack<T> temp;
			temp = this->cstacks;
			this->cstacks++;
			return(temp);
		}
			std::stack<T>& operator--()
		{
			this->cstacks--;
			return this->cstacks;
		}
		
		std::stack<T>& operator--(const std::stack<T>& rhs)
		{
			std::stack<T> temp;
			temp = this->cstacks;
			this->cstacks--;
			return(temp);
		}
		
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const MutantStack& f);
#endif

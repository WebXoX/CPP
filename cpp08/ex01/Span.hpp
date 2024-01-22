#pragma once
#ifndef __SPAN_HPP__
#define __SPAN_HPP__
#include <iostream>
// template <typename T>
class Span 
{

    /*VARIABLES*/
	private:
		unsigned int n;
		int *content;
    /*VARIABLES*/

	public:
	/*orth form*/
    	Span ()
		{
			std::cout << "Span default constructor" << std::endl;
			this->n = 0;
			this->content = NULL;
		}
		Span (unsigned int n)
		{
			std::cout << "Span default constructor" << std::endl;
			this->n = n;
			this->content = new int[n];
		}


		Span (const Span &a)
		{
			std::cout << "Span copy constructor " << std::endl;
			this->n = a.n;
			this->content = new T[a.n];
			for (unsigned int i = 0; i < a.n; i++)
				this->content[i] = a.content[i];
		}

		~Span ()
		{
			std::cout << "Span distructor called" << std::endl;
			if (this->content)
				delete [] this->content;
		}

		Span& operator=(const Span& rhs)
		{
			if (this != &rhs)
			{
				this->n = rhs.n;
				this->content = new T[rhs.n];
				for (unsigned int i = 0; i < rhs.size(); i++)
					this->content[i] = rhs.content[i];
			}
			return *this;
		}
		
	/*orth Span*/
	/*exception*/
	class OutofBounce: public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				{
					return "Out of Bounce";
				}
			}
		};
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void addNumber(void)
		{
			return (this->n);
		}
		int shortestSpan () const
		{

		}
		int longestSpan () const
		{
				
		}
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const Span& f);
#endif

#pragma once
#ifndef __ARRAY_H__
#define __ARRAY_H__
#include <iostream>
template <typename T>
class Array 
{

    /*VARIABLES*/
	private:
		unsigned int n;
		T			 *content;
    /*VARIABLES*/

	public:
	/*orth form*/
    	Array ()
		{
			std::cout << "Array default constructor" << std::endl;
			this->n = 0;
			this->content = NULL;
		}
		Array (unsigned int n)
		{
			std::cout << "Array default constructor" << std::endl;
			this->n = n;
			this->content = new T[n];
				for (unsigned int i = 0; i < n; i++)
					this->content[i] = 0;
		}


		Array (const Array &a)
		{
			std::cout << "Array copy constructor " << std::endl;
			this->n = a.n;
			this->content = new T[a.n];
			for (unsigned int i = 0; i < a.n; i++)
				this->content[i] = a.content[i];
		}

		~Array ()
		{
			std::cout << "Array distructor called" << std::endl;
			if (this->content)
				delete [] this->content;
		}

		Array& operator=(const Array& rhs)
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
		
	/*orth Array*/
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
		int size(void) const
		{
			return (this->n);
		}
		T &operator[](unsigned int i) 
		{
			if (i >= this->n  || i < 0 || !this->content)
				throw OutofBounce();
			return (this->content[i]);
		}
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const Array& f);
#endif

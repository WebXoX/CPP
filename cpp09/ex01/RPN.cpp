#include "Span.hpp"

/*orth form*/
    	Span::Span ()
		{
			std::cout << "Span default constructor" << std::endl;
			this->n = 0;
			this->count = 0;
		}
		Span::Span (unsigned int n)
		{
			std::cout << "Span default constructor" << std::endl;
			this->n = n;
			if(n == 0)
				std::cout << "vector will be empty always" << std::endl;
			this->count = 0;
		}


		Span::Span (const Span &a)
		{
			std::cout << "Span copy constructor " << std::endl;
			this->n = a.n;
			this->count = a.count;
			// this->content = a.content.copy();
			for (std::vector<int>::const_iterator i = a.content.begin(); i != a.content.end(); ++i)
				this->content.push_back(*i);
		}

		Span::~Span ()
		{
			std::cout << "Span distructor called" << std::endl;
			if (this->content.empty() == true)
				this->content.clear();
		}

		Span& Span::operator=(const Span& rhs)
		{
			if (this != &rhs)
			{
				this->n = rhs.n;
				this->count = rhs.count;
				// this->content = rhs.content.copy();
			for (std::vector<int>::const_iterator i = rhs.content.begin(); i != rhs.content.end(); ++i)
				this->content.push_back(*i);
			}
			return *this;
		}
		
	/*orth Span*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void Span::addNumber(int value)
		{
			if (this->count != this->n )
			{
				this->content.push_back(value);
				std::cout << "added " << value << std::endl;
				this->count++;
			}
			else if (this->n == 0)
			{
				throw "Span is empty";
			}
			else if (this->count == this->n)
			{
				throw "Span is full";
			}
			
		}
		void Span::addRange(int start, int end)
		{
			for (;start <= end;)
			{
				if (this->count != this->n )
				{
					this->content.push_back(start);
					std::cout << "added " << start << std::endl;
					this->count++;
					start++;
				}
				else if (this->n == 0)
				{
					throw "Span is empty";
				}
				else if (this->count == this->n)
				{
					if (start != end)
					{
						throw "Range is too big";
					}
					
					throw "Span is full";
				}
			}
		}
		int Span::shortestSpan () 
		{
			if ((this->n <= 0|| this->count< 2 ) )
			{
				throw "Span needs two or more elements";
			}
			else
			{
				std::sort(this->content.begin(), this->content.end());
				return this->content[1] - this->content[0];
			}
		}
		int Span::longestSpan () 
		{
			if ((this->n <= 0|| this->count< 2 ) )
			{
				throw "Span needs two or more elements";
			}
			else
			{
				std::sort(this->content.begin(), this->content.end());
				return this->content[this->content.size() - 1] - this->content[this->content.size() - 2];
			}	
		}
	/*extra*/
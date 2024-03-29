#include "RPN.hpp"

/*orth form*/
    	RPN::RPN ()
		{
			// std::cout << "RPN default constructor" << std::endl;
		}

		RPN::RPN (const RPN &a)
		{
			// std::cout << "RPN copy constructor " << std::endl;
			for (std::deque<double>::const_iterator i = a.content.begin(); i != a.content.end(); ++i)
				this->content.push_back(*i);
		}

		RPN::~RPN ()
		{
			// std::cout << "RPN distructor called" << std::endl;
			if (this->content.empty() == true)
				this->content.clear();
		}

		RPN& RPN::operator=(const RPN& rhs)
		{
			if (this != &rhs)
			{
				for (std::deque<double>::const_iterator i = rhs.content.begin(); i != rhs.content.end(); ++i)
					this->content.push_back(*i);
			}
			return *this;
		}
		
	/*orth RPN*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	void RPN::print()
	{
		std::cout  << " ----------------printf-------------"  << std::endl;
		for (std::deque<double>::iterator i = content.begin(); i !=content.end(); ++i)
				std::cout  << " iterate :> " << *i << std::endl;
		std::cout  << " ----------------ends-------------"  << std::endl;

	}
		void RPN::calculate (char str)
		{
			int size = content.size();
			int numb1 = content[size - 2];
			int numb2 = content[size - 1];
			content.pop_back();
			content.pop_back();
			if( str == '+')
				content.push_back(numb1 + numb2);
			else if( str == '-')
				content.push_back(numb1 - numb2);			
			else if( str == '*')
				content.push_back(numb1 * numb2);
			else if( str == '/')
			{
				if(numb2 == 0)
					throw("divide by zero");
				content.push_back(numb1 / numb2);
			}

		}
		void RPN::sort(std::string value)
		{
			if(value.find_first_not_of(" 0123456789+-/*") != std::string::npos)
				throw ("Error");
			
			for (size_t i = 0; i < value.length(); )
			{
				// this->print();
				if(value[i] == ' ')
					i++;
				else if (isdigit(value[i]) )
				{
					size_t j = i+1;
					while (j < value.length() && isdigit(value[j]))
						j++;
				
					if(value[j] != ' ' || j-i > 1)
						throw (" Error");
					int numb = static_cast<int>(strtol(value.substr(i,j).c_str(),NULL,10));
					content.push_back(numb);
					i++;
				}
				else if((value[i] == '+' || value[i] == '-' || value[i] == '*' || value[i] == '/')  && content.size() >= 2)
				{
					if (i == value.length() - 1 || value[i+1] == ' ')
						calculate(value[i]);
					else
						throw ("Error");
					i++;	
				}
				else
						throw ("Error");
				
			}
			if(content.size() == 1)
				std::cout << "" << (int)content[0] << std::endl;
			else
				throw ("Error");
		}
		
	/*extra*/
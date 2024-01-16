#include "ScalarConverter.hpp"
#include <stdio.h>
#include <cerrno>
/* orth ScalarConverter / constructor*/
ScalarConverter::ScalarConverter ()
{
	std::cout << "ScalarConverter default constructor" << std::endl;
}


ScalarConverter::ScalarConverter (const ScalarConverter &a)
{
	std::cout << "ScalarConverter copy constructor " << std::endl;
	*this = a;
}

ScalarConverter::~ScalarConverter ()
{
	std::cout << "ScalarConverter distructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
    if (this != &rhs)
    {
        std::cout << "ScalarConverter copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth ScalarConverter */
int ScalarConverter::charPos(std::string str)
{
	if (str.length() == 1 && std::isprint(str[0]))
	{
		return (1);
	}
	throw(std::exception());
	return (0);
}
/* getters */
void ScalarConverter::convert(std::string str)
{
	char * error = NULL;
	try
	{
		if(charPos(str) == 1)
		{
			std::cout << "char: " << str[0] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: impossible" << std::endl;
	}
	try
	{
		int i = std::atoi(str.c_str());
		std::cout << "int: " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: impossible" << std::endl;
	}
	try
	{
		 errno = 0;
		float i = std::strtof(str.c_str(),&error);
		 if ((error && *error != '\0') || errno == ERANGE) {
        	throw std::invalid_argument("Invalid argument or out of range");
    	}
		std::cout << "float: " << i  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "float: impossible" << std::endl;
	}
	try
	{
		 errno = 0;
		double i = std::strtod(str.c_str(),&error);
		 if ((error && *error != '\0') || errno == ERANGE) {
        	throw std::invalid_argument("Invalid argument or out of range");
    	}
		std::cout << "double: " << i << "" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "double: impossible" << std::endl;
	}
}
/* getters */
/* Exceptions */

/* Exceptions */

/* extra */

/* extra */
int main ()
{
	ScalarConverter b;
	b.convert("42.00");
}
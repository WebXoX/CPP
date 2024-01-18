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

/* extra */
bool ScalarConverter::isAscii(char c) {
    return static_cast<unsigned char>(c) <= 127;
}
bool ScalarConverter::wordException(std::string str) {
	if (str.compare("nan") == 0 || str.compare("nanf") == 0
	 || str.compare("inf") == 0 || str.compare("inff") == 0 
	 || str.compare("+inf") == 0 || str.compare("+inff") == 0
	 || str.compare("-inf") == 0 || str.compare("-inff") == 0)
		return (true);
	if (str.compare("NAN") == 0 || str.compare("NANF") == 0
	 || str.compare("INF") == 0 || str.compare("INFF") == 0 
	 || str.compare("+INF") == 0 || str.compare("+INFF") == 0
	 || str.compare("-INF") == 0 || str.compare("-INFF") == 0)
		return (true);
	return (false);	
}
int ScalarConverter::isFNumb(std::string str)
{
	int dot = 0, sign = 0;
	long unsigned int j = 0;
	while (j < str.length() && str[j] == ' ')
		j++;
	long unsigned int i = j;
	while (i < str.length() && (std::isdigit(str[i]) == 1 || str[i] == '.' || str[j] == '+' || str[j] == '-'))
	{
		if (str[i] == '.')
			dot++;
		if (str[i] == '+' || str[i] == '-')
			sign++;
		if	((tolower(str[i]) >= 'a' && tolower(str[i]) <='e') ||(tolower(str[i]) >= 'g' && tolower(str[i]) <='z'))
			return (0);
		i++;
	}
	while(tolower(str[i]) =='f')
		i++;
	while (i < str.length() && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (dot > 1 || sign > 1 || i != str.length())
		return (0);
	return (1);
}
int ScalarConverter::charPos(std::string str)
{
	if (str.length() == 1 && isAscii(str[0]) == true)
		return (2);
	if (isFNumb(str) == 1 && isAscii(static_cast<char>(strtol(str.c_str(), NULL, 10))) == true)
		return (1);
	throw(std::exception());
	return (0);
}
void ScalarConverter::convert(std::string str)
{
	try
	{
		if(charPos(str) == 2 && std::isprint(str[0]) == 1)
			std::cout << "char: '" << str.c_str() << "'" << std::endl;
		else if(charPos(str) == 1 && std::isprint(static_cast<char>(strtol(str.c_str(), NULL, 10))) == 1)
			std::cout << "char: '" << static_cast<char>(strtol(str.c_str(), NULL, 10)) << "'" << std::endl;
		else if(charPos(str) > 0 && std::isprint(static_cast<char>(strtol(str.c_str(), NULL, 10))) == 0)
			std::cout << "char: Non displayable" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: impossible" << std::endl;
	}
	try
	{
		if(charPos(str) == 2 && std::isprint(str[0]) == 1)
			std::cout << "int: '" << static_cast<int>((str[0]))<< "'" << std::endl;
		else if(isFNumb(str) == 1 )
			std::cout << "int: " << static_cast<int>(strtol(str.c_str(), NULL, 10))  << std::endl;
		else
			throw(std::exception());
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: impossible" << std::endl;
	}
	try
	{
		float i;
		if(charPos(str) == 2 && std::isprint(str[0]) == 1)
			i =  static_cast<float>((str[0]));
		else if(isFNumb(str) == 1 || wordException(str) == true)
			i = static_cast<float>(std::strtof(str.c_str(),NULL));
		else
			throw(std::exception());
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "float: " << i  << 'f' <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "float: impossible" << std::endl;
	}
	try
	{
		double i = 0.0;
		if(charPos(str) == 2 && std::isprint(str[0]) == 1)
			i = static_cast<double>((str[0]));
		else if(isFNumb(str) == 1 || wordException(str) == true)
			i = static_cast<double>(std::strtold(str.c_str(),NULL));
		else
			throw(std::exception());
		std::cout << std::setprecision(4);
		std::cout << "double: " << i << "" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "double: impossible" << std::endl;
	}
}
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */


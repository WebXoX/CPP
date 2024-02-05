#include "ScalarConverter.hpp"
#include <stdio.h>
#include <cerrno>
#include <cfloat>
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
bool ScalarConverter::isAscii(long c) {
	if (c >= 0 && c <= 127)
		return (true);
	return (false);
}
bool ScalarConverter::isprintable(long c) {
	if (c >= 33 && c <= 126)
		return (true);
	return (false);
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
	std::string ints, floats,signs,point, fstr;
	int sign = 0;
	int decimal= 0;
	int fcount= 0;
	size_t number = str.find_first_not_of("-+0123456789.f");
	size_t number2 = str.find_first_of("0123456789");
	fstr = str;
	signs = str;
	ints = str;
	point = str;
	if (number != std::string::npos || number2 == std::string::npos)
		return (-1);
	while (signs.find_first_of("+-")!= std::string::npos)
	{
		if (signs.find_first_of("+-") > number2)
			return (-1);
		sign++;
		signs = signs.substr(signs.find_first_of("+-") + 1, signs.length());
	}
	while (point.find_first_of('.')!= std::string::npos)
	{
		decimal++;
		if(point.find_first_of(".")+1 == point.length())
			break;
		point = point.substr(point.find_first_of(".") + 1, point.length());
	}
	while (fstr.find_first_of('f')!= std::string::npos)
	{
		fcount++;
		if(fstr.find_first_of("f")+1 == fstr.length())
			break;
		fstr = fstr.substr(fstr.find_first_of("f") + 1, fstr.length());
	}
	if (sign > 1 || decimal > 1 || fcount > 1)
		return (-1);
	if( decimal == 0 && fcount == 0)
		return (0);
	if (str.find_first_of(".") == std::string::npos)
		ints = str;
	else
		ints = str.substr(0, str.find_first_of(".") - 1);
		// std::cout << "ints: "  << std::endl;
	floats = str.substr(str.find_first_of(".") + 1, str.length());
	if (ints.find_first_not_of("-+0123456789") != std::string::npos)
		return (-1);
	if (floats.find_first_not_of("0123456789f") != std::string::npos)
		return (-1);
	return (1);
}

int ScalarConverter::isChar(std::string str)
{
	if (str.length() == 1 && isascii((int)str[0]) == true && isprintable((int)str[0]) == true)
	{
		if (isAscii((long)(str[0])) == false)
			std::cout << "char: impossible" << std::endl;
		else if (isprintable((long)((str[0]))) == false || str.find_first_of("1234567890") != std::string::npos)
		{
			std::cout << "char: Non displayable" << std::endl;	
			std::cout << "int: "  << static_cast<int>(std::strtol(str.c_str(),NULL,10))  <<  std::endl;
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "float: " << static_cast<float>(std::strtof(str.c_str(),NULL))  << 'f' <<std::endl;
			std::cout << std::fixed << std::setprecision(4);
			std::cout << "double: " << static_cast<double>(std::strtold(str.c_str(),NULL))  <<std::endl;
		}
		else
		{
			std::cout << "char: '" << str[0] << "'" << std::endl;
			std::cout << "int: "  << static_cast<int>(str[0])  <<  std::endl;
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "float: " << static_cast<float>(str[0]) << 'f' <<std::endl;
			std::cout << std::fixed << std::setprecision(4);
			std::cout << "double: " << static_cast<double>(str[0]) <<std::endl;
		}
		return (1);
	}
	return (0);
}
void ScalarConverter::convert(std::string str)
{
	if (isChar(str) == 1)
		return ;
	else if (wordException(str) == true)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible"  << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(std::strtof(str.c_str(),NULL))  << 'f' <<std::endl;
		std::cout << std::fixed << std::setprecision(3);
		std::cout << "double: " << static_cast<double>(std::strtold(str.c_str(),NULL)) << "" << std::endl;
		return ;
	}
	else if (isFNumb(str) == 1 || isFNumb(str) == 0)
	{
		if (isAscii(strtol(str.c_str(), NULL, 10)) == false)
			std::cout << "char: impossible" << std::endl;
		else if (isprintable((strtol(str.c_str(), NULL, 10))) == false)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(strtol(str.c_str(), NULL, 10)) << "'" << std::endl;
		long double d = std::strtold(str.c_str(),NULL);
		if ((long)d > 2147483647 || (long)d < -2147483648)
			std::cout << "int: overflow"  << std::endl;
		else
			std::cout << "int: "  << static_cast<int>(std::strtol(str.c_str(),NULL,10))  <<  std::endl;
		std::cout << std::fixed << std::setprecision(2);
		if (d > FLT_MAX && d < FLT_MIN)
			std::cout << "float: overflow"  << std::endl;
		else
			std::cout << "float: " << static_cast<float>(std::strtof(str.c_str(),NULL))  << 'f' <<std::endl;
		std::cout << std::fixed << std::setprecision(4);
		if (d > DBL_MAX && d < DBL_MIN)
			std::cout << "double: overflow"  << std::endl;
		else
			std::cout << "double: " << static_cast<double>(std::strtold(str.c_str(),NULL))  <<std::endl;
		return;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible"  << std::endl;
		std::cout << "float: impossible" <<std::endl;
		std::cout << "double: impossible" << "" << std::endl;
		return ;
	}

}
/* extra */
/* getters */
/* getters */
/* Exceptions */
/* Exceptions */


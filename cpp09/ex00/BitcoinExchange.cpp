#include "BitcoinExchange.hpp"

/* orth BitcoinExchange / constructor*/
BitcoinExchange::BitcoinExchange ()
{
	std::cout << "BitcoinExchange default constructor" << std::endl;
}

BitcoinExchange::BitcoinExchange (const BitcoinExchange &a)
{
	std::cout << "BitcoinExchange copy constructor " << std::endl;
	*this = a;
}

BitcoinExchange::~BitcoinExchange ()
{
	std::cout << "BitcoinExchange distructor called" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if (this != &rhs)
    {
        std::cout << "BitcoinExchange copy assignment operator = " << std::endl;
		*this = rhs;
    }
    return *this;
}
/* orth BitcoinExchange */
/*extra*/
/*extra*/
/*getter and setters*/

BitcoinExchange::setKeyVal(std::string key, std::string val)
{
	this->KeyVal[key] = val;
}
/*getter and setters*/

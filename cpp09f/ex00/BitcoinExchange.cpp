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
void BitcoinExchange::exchange(std::string date_save, double fvalue)
{
	    for (std::map<std::string, double>::iterator i = this->KeyVal.begin(); i != this->KeyVal.end(); ++i)
        {
            if(i->first == date_save)
            {
                double answer = i->second * fvalue;
                std::cout << date_save << "=> " << fvalue << " = " <<answer << std::endl;
                return ;
            }
            if (i->first > date_save)
            {
                --i;
                std::cout << date_save << ":"  "=> " << fvalue << " = " << (i)->second * fvalue << std::endl;
                return ;
            }
        }
}
/*extra*/
/*getter and setters*/

void BitcoinExchange::setKeyVal(std::string key, double val)
{
	this->KeyVal[key] = val;
}
/*getter and setters*/

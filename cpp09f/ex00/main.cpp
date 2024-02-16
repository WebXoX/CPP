#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cfloat>
#include <sys/types.h>
#include <sys/stat.h>
#include "BitcoinExchange.hpp"

int isF_N_Numb(std::string str)
{
	std::string ints, floats,point, fstr , signs;
	int decimal= 0;
	int fcount= 0;
	int sign= 0;
	size_t number = str.find_first_not_of("-0123456789.f");
	size_t number2 = str.find_first_of("0123456789");
	fstr = str;
	ints = str;
	signs = str;
	point = str;
	if (number != std::string::npos || number2 == std::string::npos)
		return (-1);
    while (signs.find_first_of('-')!= std::string::npos)
	{
		sign++;
		if(signs.find_first_of("-")+1 == signs.length())
			break;
		signs = signs.substr(signs.find_first_of("-") + 1, signs.length());
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
	if ( decimal > 1 || fcount > 1 || sign > 1)
		return (-1);
	if( decimal == 0 && fcount == 0)
		return (0);
	if (str.find_first_of(".") == std::string::npos)
		ints = str;
	else
		ints = str.substr(0, str.find_first_of(".") - 1);
	floats = str.substr(str.find_first_of(".") + 1, str.length());
	if (ints.find_first_not_of("0123456789") != std::string::npos || floats.find_first_not_of("0123456789f") != std::string::npos)
		return (-1);
	return (1);
}
int monthDate(int year, int month)
{
    int days = 0;
    if (month == 2)
    {
        if (year % 4 == 0)
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;
    return days;
}

int validateUser(std::string date, std::string value,BitcoinExchange *b)
{
    std::string year;
    std::string month;
    std::string day;
    std::string data_Save = date;
    if (date.find_first_of("0123456789-") != std::string::npos)
    {
        year = date.substr(0, date.find_first_of("-"));
        int dyear = static_cast<int>(strtol(year.c_str(), NULL, 10)) ;
        if (isF_N_Numb(year) == -1 || isF_N_Numb(year) == 1 || dyear < 2009 || dyear > 2024)
        {
            std::cout << "[Error: bad input => " << dyear << " ]"<< std::endl;
            return 0;
        }
        date = date.substr(date.find_first_of("-") + 1,date.length());
        month = date.substr(0, date.find_first_of("-"));
        int dmonth = static_cast<int>(strtol(month.c_str(), NULL, 10)) ;
        if (isF_N_Numb(month) == -1 || isF_N_Numb(month) == 1 || dmonth < 1 || dmonth > 12)
        {
            std::cout << "[Error: bad input => " << dmonth << " ]"<< std::endl;
            return 0;
        }
        date = date.substr(date.find_first_of("-") + 1,date.length());
        day = date.substr(0, date.find_first_of("-"));
        int dday = static_cast<int>(strtol(day.c_str(), NULL, 10)) ;
        if (dday < 1 || dday > monthDate(dyear, dmonth) || isF_N_Numb(date) == -1 || isF_N_Numb(date) == 1)
        {
            std::cout << "[Error: bad input => " << dday << " ]"<< std::endl;
            return 0;
        }
        value = value.substr(value.find_first_of(" ") + 1,value.length());
        double fvalue = 0;
        if (isF_N_Numb(value) == -1 )
        {
            std::cout << "[Error: bad input => " << value << " ]"<< std::endl;
            return 0;
        }
        fvalue = static_cast<double>(std::strtold(value.c_str(),NULL));
        if( (fvalue < 0 ))
        {
            std::cout << "[Error: not a positive number.]"<< std::endl;
            return 0;
        }
        if( ( fvalue >  1000))
        {
            std::cout << "[Error: too large a number.]"<< std::endl;
            return 0;
        }
        b->exchange(data_Save,fvalue);
    }
    return 1;
}

int validate(std::string date, std::string value,BitcoinExchange *b)
{
    std::string year;
    std::string month;
    std::string day;
    std::string data_Save = date;
    if (date.find_first_of("0123456789-") != std::string::npos)
    {
            year = date.substr(0, date.find_first_of("-"));
            int dyear = static_cast<int>(strtol(year.c_str(), NULL, 10)) ;
            if ( isF_N_Numb(year) == -1 || isF_N_Numb(year) == 1 || dyear < 2009 || dyear > 2024)
            {
                std::cout << "year not ok" << std::endl;
                return 0;
            }
            date = date.substr(date.find_first_of("-") + 1,date.length());
            month = date.substr(0, date.find_first_of("-"));
            int dmonth = static_cast<int>(strtol(month.c_str(), NULL, 10)) ;
            if (isF_N_Numb(month) == -1 || isF_N_Numb(month) == 1 || dmonth < 1 || dmonth > 12)
            {
                std::cout << "month not ok" << std::endl;
                return 0;
            }
            date = date.substr(date.find_first_of("-") + 1,date.length());
            day = date.substr(0, date.find_first_of("-"));
            int dday = static_cast<int>(strtol(day.c_str(), NULL, 10)) ;
            if (isF_N_Numb(date) == -1 || isF_N_Numb(date) == 1 || dday < 1 || dday > monthDate(dyear, dmonth))
            {
                std::cout << "day not ok" << std::endl;
                return 0;
            }
            if(date.find_first_of("-") != std::string::npos)
            {
                std::cout << "data base invalid" << std::endl;
                return 0;
            }
        value = value.substr(value.find_first_of(" ") + 1,value.length());
        double fvalue = 0;
        if(isF_N_Numb(value) == -1 || value.find_first_of(" ") != std::string::npos )
            return 0;
        fvalue = static_cast<double>(std::strtold(value.c_str(),NULL));
        if (fvalue < 0 || fvalue >  DBL_MAX)
        {
            std::cout << "value not ok" << std::endl;
                return 0;
        }
        b->setKeyVal(data_Save,fvalue);
    }
    return 1;
}

int validefile( std::string str, BitcoinExchange *b)
{
	struct stat fileStat;
	std::string line;
    std::string str2  = str.substr(str.find_last_of('.') + 1);
    stat((str.c_str()), &fileStat);
    if (str2.compare("txt") == 0 && S_ISDIR(fileStat.st_mode) == 0)
        {
            std::ifstream infile;
            infile.open(str.c_str());
            if (infile.is_open())
            {
                std::getline(infile,line);
                if(line.find("date | value") != std::string::npos)
                {
                    std::cout << "[FILE OPEN]" << std::endl;
                }
                while (std::getline(infile,line) )
                {
                    std::string date = line.substr(0, line.find(" | "));
                    std::string value = line.substr(line.find(" | ") + 2, line.length());
                    if ( date.find_first_of("|") != std::string::npos || value.find_first_of("|") != std::string::npos)
                    {
                        std::cout << "[INCORRECT FORMAT]" << std::endl;
                    }
                    else
                        validateUser(date, value,b);
                }
                infile.close();
                return 1;
            }
        }
    return 0;
}

int loadData(BitcoinExchange *b)
{
	struct stat fileStat;
	std::string line;
    stat(("data.csv"), &fileStat);
    if (S_ISDIR(fileStat.st_mode) == 0)
        {
            std::ifstream infile;
            infile.open("data.csv");
            if (infile.is_open())
            {
                std::getline(infile,line);
                if(line.find("date,exchange_rate") == std::string::npos)
                {
                    std::cerr << "incorect data base" << std::endl;
                    return 1;
                }
                while (std::getline(infile,line) )
                {

                    std::string date = line.substr(0, line.find(","));
                    std::string value = line.substr(line.find(",") + 1, line.length());
                    if(validate(date, value,b) == 0)
                    {
                        std::cerr << "incorect data base" << std::endl;
                        return 0;
                    }
                }
                infile.close();
                return 1;
            }

        }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange  *b = new BitcoinExchange();
        if (loadData(b) == 0)
        {
            std::cout << "[INVALID DATABASE]" << std::endl;
            delete b;
            return 1;
        }
        else
            std::cout << "[VALID DATABASE]" << std::endl;
        if (validefile(argv[1],b) == 0)
        {
            std::cout << "Error: file not found" << std::endl;
            delete b;
            return 0;
        }
    delete b;
    }
    else
        std::cout << "Error: Incorrect Number Of Arguments" << std::endl;
    return 0;
}
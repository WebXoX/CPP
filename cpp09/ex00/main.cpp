#include <fstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <sys/types.h>
#include <sys/stat.h>
// #include "BitcoinExchange.hpp"
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

int validate(std::string date, std::string value,BitcoinExchange b)
{
    std::string year;
    std::string month;
    std::string day;
    std::string data_Save = date;
    if (date.find_first_of("0123456789-") != std::string::npos)
    {
            year = date.substr(0, date.find_first_of("-"));
            int dyear = static_cast<int>(strtol(year.c_str(), NULL, 10)) ;
            if (dyear >= 2009 && dyear <= 2024)
            {
                // std::cout << "year ok" << std::endl;
            }
            else
            {
                std::cout << "year not ok" << std::endl;
                // error = 1;
            }
            date = date.substr(date.find_first_of("-") + 1,date.length());
            month = date.substr(0, date.find_first_of("-"));
            int dmonth = static_cast<int>(strtol(month.c_str(), NULL, 10)) ;
            if (dmonth >= 1 && dmonth <= 12)
            {
                // std::cout << "month ok" << std::endl;
            }
            else
            {
                std::cout << "month not ok" << std::endl;
                // error = 1;
            }
            date = date.substr(date.find_first_of("-") + 1,date.length());
            day = date.substr(0, date.find_first_of("-"));
            int dday = static_cast<int>(strtol(day.c_str(), NULL, 10)) ;
            if (dday >= 1 && dday <= monthDate(dyear, dmonth))
            {
                // std::cout << "day ok" << std::endl;
            }
            else
            {
                std::cout << "day not ok" << std::endl;
                // error = 1;
            }
            if(date.find_first_of("-") == std::string::npos)
                // error = 1;
        value = value.substr(value.find_first_of(" ") + 1,value.length());
        double fvalue = 0;
    if (value.find_first_of("0123456789.") != std::string::npos)
    {
        fvalue = static_cast<double>(std::strtold(value.c_str(),NULL));
        if (fvalue >= 0 && fvalue <= 4294967295)
        {
            std::cout << "value ok " << fvalue << std::endl;
            b.setKeyVal(data_Save,value)
        }
        else
        {
            std::cout << "value not ok" << std::endl;
            // error = 1;
        }
    }

    std::cout << year <<  " " << month << " " << day << " " << fvalue << std::endl;
    }
    return 1;
}
int validefile( std::string str)
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
                // int val = 0;
                std::getline(infile,line);
                if(line.find("date | value") != std::string::npos)
                {
                    std::cout << "file here" << std::endl;
                    // val = 1;
                }
                while (std::getline(infile,line) )
                {
                    std::string date = line.substr(0, line.find(" | "));
                    std::string value = line.substr(line.find(" | ") + 1, line.length());
                    validate(date, value);
                }
                

                infile.close();
                return 1;
            }

        }
    return 0;
}
int loadData(BitcoinExchange b)
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
                // int val = 0;
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
                    validate(date, value);
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
        BitcoinExchange b;
        if (loadData(b) == 0)
        {
             std::cout << "Error: database not found" << std::endl;
        }
        if (validefile(argv[1]) == 0)
        {
            std::cout << "Error: file not found" << std::endl;
            return 0;
        }
        // b.makeForm(str2, str3);
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}
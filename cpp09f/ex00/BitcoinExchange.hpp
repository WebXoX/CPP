#pragma once
#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__
#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <map>

/*
*/
class BitcoinExchange
{
	/* VARIABLES*/
	private:
		std::map<std::string, double> KeyVal;
		
    /* VARIABLES*/
	public:
	/*orth form*/
    	BitcoinExchange ();
    	BitcoinExchange (const BitcoinExchange &a);
    	~BitcoinExchange ();
		BitcoinExchange& operator=(const BitcoinExchange &a);
	/*orth BitcoinExchange*/
	/*exception*/

	
	/*exception*/
	/*getters and setters*/
	void setKeyVal(std::string key, double val);
	/*getters and setters*/
	/*extra*/
	void exchange(std::string date_save, double fvalue);
	/*extra*/
};
#endif

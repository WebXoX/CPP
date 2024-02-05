#pragma once
#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>

/*
*/
class BitcoinExchange
{
	/* VARIABLES*/
	private:
		std::map<std::string, int> KeyVal;
		
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
	/*getters and setters*/
	/*extra*/
	void setKeyVal(std::string key, std::string val);
	/*extra*/
};
#endif

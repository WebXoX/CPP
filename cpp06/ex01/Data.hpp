#pragma once
#ifndef __DATA_H__
#define __DATA_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

class Data {
	public:
		Data ();
		Data (const Data &a);
		~Data ();
		Data& operator=(const Data &a);
		Data(std::string name,int age,std::string gender,std::string nationality);

		std::string name;
		int age;
		std::string gender;
		std::string nationality;
};
#endif
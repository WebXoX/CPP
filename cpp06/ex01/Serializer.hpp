#pragma once
#ifndef __SERIALIZER_H__
#define __SERIALIZER_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "Data.hpp"
/*
*/
// typedef struct Data
// {
// 	std::string name;
// 	int age;
// 	std::string gender;
// 	std::string nationality;
// } Data;
class Serializer 
{

    /*VARIABLES*/
    /*VARIABLES*/

	private:
	/*orth form*/
    	Serializer ();
    	Serializer (const Serializer &a);
    	~Serializer ();
		Serializer& operator=(const Serializer &a);
	/*orth Serializer*/

	/*exception*/
	/*exception*/

	/*getters and setters*/
	/*getters and setters*/
	public:
	/*extra*/
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	/*extra*/
};
// std::ostream& operator<<(std::ostream& os, const Serializer& f);
#endif

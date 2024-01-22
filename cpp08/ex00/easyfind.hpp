#pragma once
#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__
#include <iostream>
    /*VARIABLES*/
    /*VARIABLES*/
	/*orth form*/
	/*orth whatever*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
template <typename T>
	T easyfind(T a, int n)
	{
		for (typename T::iterator it = a.begin(); it != a.end(); it++)
			if (*it == n)
				return *it;
		throw "Not found";
	}


/*extra*/
#endif

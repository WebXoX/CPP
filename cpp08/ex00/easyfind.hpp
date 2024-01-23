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
	int easyfind(T &a, int n)
	{
		typename T::iterator it = std::find(a.begin(), a.end(), n);
		if(it != a.end())
			return *it;
		throw "Not found";
	}
/*extra*/
#endif

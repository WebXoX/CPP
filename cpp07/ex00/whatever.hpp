#pragma once
#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__
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
	T max(T a, T b)
	{
		return (a > b ? a : b);
	}

template <typename T>
	T min(T a, T b)
	{
		return (a < b ? a : b);
	}

template <typename T>
	void swap(T &a, T &b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
/*extra*/
#endif

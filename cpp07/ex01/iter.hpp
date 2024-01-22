#pragma once
#ifndef __ITER_H__
#define __ITER_H__
#include <iostream>
    /*VARIABLES*/
    /*VARIABLES*/
	/*orth form*/
	/*orth ITER*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
template <typename T, typename IterFunc>
	void iter(T * address, size_t length, IterFunc func)
	{
		for (size_t i = 0; i < length; i++)
			func(address[i]);
	}
/*extra*/
#endif

#pragma once
#ifndef __SPAN_HPP__
#define __SPAN_HPP__
#include <iostream>
#include <vector>
#include <algorithm>
// template <typename T>
class Span 
{

    /*VARIABLES*/
	private:
		unsigned int n;
		unsigned int count;
		std::vector<int> content;
    /*VARIABLES*/

	public:
	/*orth form*/
    	Span ();
		Span (unsigned int n);
		Span (const Span &a);
		~Span ();
		Span& operator=(const Span& rhs);
	/*orth Span*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void addNumber(int value);
		void addRange(int start, int end);
		int shortestSpan ();
		int longestSpan ();
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const Span& f);
#endif

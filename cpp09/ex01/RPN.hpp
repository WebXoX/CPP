#pragma once
#ifndef __RPN_HPP__
#define __RPN_HPP__
#include <iostream>
#include <vector>
#include <algorithm>
// template <typename T>
class RPN 
{

    /*VARIABLES*/
	private:
		unsigned int n;
		unsigned int count;
		std::vector<int> content;
    /*VARIABLES*/

	public:
	/*orth form*/
    	RPN ();
		RPN (unsigned int n);
		RPN (const RPN &a);
		~RPN ();
		RPN& operator=(const RPN& rhs);
	/*orth RPN*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void addNumber(int value);
		void addRange(int start, int end);
		int shortestRPN ();
		int longestRPN ();
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const RPN& f);
#endif

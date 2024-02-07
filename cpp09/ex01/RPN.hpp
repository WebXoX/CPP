#pragma once
#ifndef __RPN_HPP__
#define __RPN_HPP__
#include <iostream>
#include <vector>
#include <algorithm>
class RPN 
{

    /*VARIABLES*/
	private:
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
		void sort(std::string value);
		void print();
		void calculate (char str);
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const RPN& f);
#endif

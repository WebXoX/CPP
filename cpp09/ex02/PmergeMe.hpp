#pragma once
#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
// template <typename T>
class PmergeMe 
{

    /*VARIABLES*/
	public:
		std::vector<std::vector<int> > itemsv;
		std::vector<int> chainv;
		std::list<std::list<int> > items;
		std::list<int> chainl;
    /*VARIABLES*/

	public:
	/*orth form*/
    	PmergeMe ();
		PmergeMe (unsigned int n);
		PmergeMe (const PmergeMe &a);
		~PmergeMe ();
		PmergeMe& operator=(const PmergeMe& rhs);
	/*orth PmergeMe*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
		void push_pair_ve(int * a, int *b, int flag);
		void a_sort_insert_ve();
		void push_pair_l(int * a, int *b, int flag);
	/*extra*/

};
// std::ostream& operator<<(std::ostream& os, const PmergeMe& f);
#endif

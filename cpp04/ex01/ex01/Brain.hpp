#pragma once
#ifndef __BRAIN_H__
#define __BRAIN_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class Brain 
{
	public:
    	Brain ();
    	Brain (const Brain &a);
    	~Brain ();
		std::string * getIdeas(void)	;
		void setIdeas(std::string ideas, int index);
		Brain& operator=(const Brain &a);
	private:
		std::string *ideas;
};
#endif

#pragma once
#ifndef __HARL_H__
#define __HARL_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>

class Harl {
typedef void(Harl:: *C)();

    private:
    void debug( void );
	void info( void );
	void warning( void );
	void error( void );

    public:
	void complain( std::string level );
};
#endif

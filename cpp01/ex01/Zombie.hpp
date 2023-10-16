#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>

class Zombie {
    private:
    std::string name;

    public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void setName( std::string name );
	void announce( void );
};
#endif

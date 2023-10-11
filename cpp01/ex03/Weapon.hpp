#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
class Weapon {

    private:
    std::string type;


    public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    
    std::string& getType();
    void setType(std::string type);
};
#endif

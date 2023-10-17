#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Weapon.hpp"
class HumanA {

    private:
    std::string name;
    Weapon &danger;

    public:
    HumanA(std::string name,Weapon &type);
    void attack(void);
};
#endif

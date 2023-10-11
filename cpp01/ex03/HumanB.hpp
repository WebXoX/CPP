#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Weapon.hpp"
class HumanB {
private:
    std::string name;
    Weapon danger;

    public:
    HumanB();
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon type);
};
#endif

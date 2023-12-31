#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Contact.hpp"
class Contact {

    private:
    int         index;
    std::string fname;
    std::string lname;
    std::string nname;
    std::string number;
    std::string secret;


    public:
    void Contact_rem();
    void Contact_init(int index,std::string fname, std::string lname, std::string nname,std::string number,std::string secret);
    int GetIndex();
    std::string GetFname();
    std::string GetLname();        
    std::string GetNname();
    std::string GetNumber();
    std::string GetSecret();
};
#endif

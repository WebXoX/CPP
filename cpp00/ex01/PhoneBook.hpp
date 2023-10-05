#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define PURP   "\033[1;33m"
#define BLUE   "\033[1;34m"
#define WHITE   "\033[1;97m"
#define DEFAULT "\033[0m"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
    private:
    int index;
    Contact peps[8];
    
    public:
    PhoneBook();
    int ExistingUserCheck(std::string fname, std::string lname, std::string nname);
    void AddContact(std::string fname, std::string lname, std::string nname, std::string number, std::string secret);
    void print_space(int len1,int len2);
    void print_word(std::string str);
    void print();
    void searchReturn();
    void exit_empty();
};
#endif
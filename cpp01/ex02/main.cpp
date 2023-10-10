#include <iostream>
#include <string>

int main ( )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "string address:           " << &str << std::endl;
    std::cout << "string pointer address:   "<< stringPTR << std::endl;
    std::cout << "string reference address: " << &stringREF << std::endl << std::endl;

    std::cout << "string:           " << str << std::endl;
    std::cout << "string pointer:   " << *stringPTR << std::endl;
    std::cout << "string reference: " << stringREF << std::endl;
}
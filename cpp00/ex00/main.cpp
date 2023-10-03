#include <iostream>
#include <string>

int main ( int argc, char **argv)
{
    std::string Capital;
    int j = 1;
    if (argc > 1)
    {
        while (j < argc)
        {
            Capital = argv[j];
            for (size_t i = 0; Capital[i] != '\0'; i++)
                Capital[i] = std::toupper(Capital[i]);            
            std::cout << Capital;
            j++;
        }
        
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    
}
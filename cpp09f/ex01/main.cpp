#include <iostream>
#include "RPN.hpp"


int main(int argc, char ** argv) 
{
	if (argc == 2 && argv[1][0] != '\0')
	{	
		RPN sort = RPN();
		try
		{
			sort.sort(argv[1]);
		}
		catch(const char * e)
		{
			std::cout << e << std::endl;
		}
	}
	else
        std::cout << "Error: Incorrect Number Of Arguments" << std::endl;
    return 0;
}

#include <iostream>
#include "Span.hpp"


int main() 
{
	Span sp = Span(5);
	Span sp2 = Span(sp);
	try
	{
		sp.addNumber(9);
		sp.addNumber(4);
		sp.addNumber(5);
		sp2 = sp;
		// sp2.addRange(0,520);
		// sp.addNumber(7);
		// sp.addNumber(5);
		// sp.addNumber(5);
		std::cout << " " <<sp.longestSpan() << std::endl;
		std::cout << " " <<sp.shortestSpan() << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << '\n';
	}
	
    return 0;
}

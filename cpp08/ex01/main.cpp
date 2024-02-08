#include <iostream>
#include "Span.hpp"


int main() 
{
	Span sp = Span(5);
	Span sp2 = Span(sp);
	Span sp3 = Span(1000);
	try
	{
		sp.addNumber(9);
		sp.addNumber(4);
		sp.addNumber(5);
		sp.addNumber(7);
		sp.addNumber(5);
		// sp.addNumber(5);
		std::cout << " " <<sp.longestSpan() << std::endl;
		std::cout << " " <<sp.shortestSpan() << std::endl;
		sp3.addRange(1,1000);
		std::cout << " 3 " <<sp3.longestSpan() << std::endl;
		std::cout << " 3 " <<sp3.shortestSpan() << std::endl;
		sp2 = sp;
		sp2.addRange(0,520);
		std::cout << " 2 " <<sp2.longestSpan() << std::endl;
		std::cout << " 2 " <<sp2.shortestSpan() << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << '\n';
	}
	
    return 0;
}

// int main()
// {
// Span sp = Span(10001);
// for (size_t i = 0; i < 10000; i++)
// {
// 	// sp.addNumber(i* (i %2 +1) + (i % 2));
// 	sp.addNumber(i);
// 	/* code */
// }

// // sp.addNumber(6);
// // sp.addNumber(3);
// // sp.addNumber(17);
// // sp.addNumber(9);
// // sp.addNumber(16);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }
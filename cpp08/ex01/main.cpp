#include <iostream>
#include "iter.hpp"

template <typename T>
void init(T& element)
{
	element = 1;
}
template <typename T>
void print(const T& element)
{
	std::cout << element << ". " << std::endl;
}
int main() {
	// string
	std::cout << "Printing strings: "<< std::endl;
    std::string stringArray[] = {"apple", "banana", "orange", "grape", "kiwi"};
    iter(stringArray, 5, print<std::string>);
    iter(stringArray, 5, init<std::string>);
    iter(stringArray, 5, print<std::string>);
    std::cout << std::endl;
	//int 
	std::cout << "Printing ints: " << std::endl;
	int	intArray[] ={1, 2, 3, 4, 5};
    iter(intArray, 5, print<int>);
    iter(intArray, 5, init<int>);
    std::cout << std::endl;
    iter(intArray, 5, print<int>);
	//char
	std::cout << "Printing chars: " << std::endl;
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	iter(charArray, 5, print<char>);
	iter(charArray, 5, init<char>);
    std::cout << std::endl;
	iter(charArray, 5, print<char>);
	//float
	std::cout << "Printing float: " << std::endl;
	float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	iter(floatArray, 5, print<float>);
	iter(floatArray, 5, init<float>);
    std::cout << std::endl;
	iter(floatArray, 5, print<float>);
	//double
	std::cout << "Printing doubles: " << std::endl;
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(doubleArray, 5, print<double>);
	iter(doubleArray, 5, init<double>);
    std::cout << std::endl;
	iter(doubleArray, 5, print<double>);
    return 0;
}

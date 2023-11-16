#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
int main()
{

	const Animal* j[10];
	Cat* yo = new Cat();
	Cat* yo3 = new Cat();
	const Dog* yo1 = new Dog();
	for(int i =0; i<5;i++)
	{
		std::cout << std::endl;
		j[i] = new Dog();
		std::cout << std::endl;
		j[5+i] = new Cat();
	}

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "\n----->" <<i+1 <<std::endl;
		delete j[i];
	}
		std::cout << ">< "<<yo->getType() << std::endl;
		std::cout << ">< "<<yo1->getType() << std::endl;
		*yo = *yo3;
		std::cout << std::endl;
		delete yo;
		std::cout << std::endl;
		delete yo1;
		delete yo3;
	return 0;
}
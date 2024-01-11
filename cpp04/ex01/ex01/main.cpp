#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "notAnimal.hpp"
#include "notCat.hpp"
#include "Dog.hpp"
int main()
{

const Animal* j[10];
for(int i =0; i<5;i++)
{
	std::cout << i+1 << "----------------- >"  << std::endl;
	j[i] = new Dog();
	std::cout << i+1 << "----------------- >"  << std::endl;
	j[5+i] = new Cat();
}
	std::cout << std::endl;
	// j[0] = j[1];
	std::cout << std::endl;

for (size_t i = 0; i < 10; i++)
{
	std::cout << i+1 << "----------------- >"  << std::endl;
	delete  j[i];
}
	std::cout << std::endl;

	Dog *dog = new Dog("yoda");
	std::cout << std::endl;

	Dog *dog2 = new Dog("bert");
	std::cout << std::endl;

	// for (size_t i = 0; i < 100; i++)
	// {
	// 	cat->getBrains()->setIdeas("purrr",i);
	// 	cat2->getBrains()->setIdeas("aooow",i);
	// }
	std::cout <<"cat: yoda"<< std::endl;
	
	// for (size_t i = 0; i < 100; i++)
	// {
	// 	std::cout <<cat->getBrains()->getIdeas()[i];
	// 	std::cout<< std::endl;
	// }
	std::cout<< std::endl;

	std::cout <<"cat: bert"<< std::endl;
	dog = dog2;
	// for (size_t i = 0; i < 100; i++)
	// {
	// 	std::cout <<cat2->getBrains()->getIdeas()[i];
	// 	std::cout<< std::endl;
	// }
	// for (size_t i = 0; i < 100; i++)
	// {
	// 	std::cout <<cat->getBrains()->getIdeas()[i];
	// 	std::cout<< std::endl;
	// }
	
	delete dog;
	delete dog2;

return 0;
}
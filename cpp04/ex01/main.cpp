#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "notAnimal.hpp"
#include "notCat.hpp"
#include "Dog.hpp"
int main()
{

const Animal* j[10];
// const Cat* yo = new Cat();
for(int i =0; i<5;i++)
{
	j[i] = new Dog();
	j[5+i] = new Cat();
}

for (size_t i = 0; i < 10; i++)
{
	std::cout << "\n" <<i+1 <<std::endl;
	delete j[i];
}


// for(int i =0; i<100;i++)
// {
// 	j->getBrains()->getIdeas()[i] = "old";

// }
// std::cout << "hi   "<< j->getBrains()->getIdeas()[0] <<std::endl;
// delete j;//should not create a leak
// delete i;

return 0;
}
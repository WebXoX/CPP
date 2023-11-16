#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
int main()
{
const Animal* meta = new Animal();
 std::cout << "\n";
const Animal* j = new Dog();
 std::cout << "\n";
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
 std::cout << "\n";
delete meta;
delete j;
delete i;
 std::cout << "\n";
const WrongAnimal* metas = new WrongAnimal();
 std::cout << "\n";
const WrongAnimal* is = new WrongCat();
std::cout << is->getType() << " " << std::endl;
is->makeSound(); //will output the not cat sound!
metas->makeSound();
 std::cout << "\n";

delete metas;
delete is;
return 0;
}
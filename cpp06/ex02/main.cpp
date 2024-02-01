#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base * generate(void)
{
	std::srand(static_cast<unsigned>(std::time(0)));
	int i = rand() % 3;
	std::cout << i << std::endl;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());

}
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}
void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}
int main()
{
	Base *b = generate();
	Base &c = *generate();
	identify(b);
	identify(c);
	delete b;
	delete c;
	return (0);
}
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base * generate(void)
{
	std::srand(static_cast<unsigned>(std::time(0)));
	int i = rand() % 3;
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
	else
		std::cout << "could not Identify" << std::endl;
}
void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not A" << std::endl;
	}
	try 
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not B" << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not C" << std::endl;
	}
}
int main()
{
	Base *a = generate();
	Base *b = generate();
	Base *c = generate();
	Base &c1 = *c;
	Base *d = NULL;

	std::cout << "identify  a" << std::endl;
	identify(a);
	std::cout << "identify  b" << std::endl;
	identify(b);
	std::cout << "identify  c" << std::endl;
	identify(c1);
	std::cout << "identify  d" << std::endl;
	identify(d);

	delete a;
	delete b;
	delete c;
	return (0);
}
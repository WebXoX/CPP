#include <list>
#include "MutantStack.hpp"
int main()
{
	std::cout << "----------Mutant---------" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(1);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		std::cout << "size " << mstack.size() << std::endl;
		mstack.pop();
		std::cout << "----------popfront---------" << std::endl;
		std::cout  << "size " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "----------list---------" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_front(1);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl;
		std::cout << "size " << mstack.size() << std::endl;
		mstack.pop_front();
		std::cout << "----------popfront---------" << std::endl;

		std::cout  << "size " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(mstack);
	}
	{
		MutantStack<int> mstack;
		for (size_t i = 0; i < 50; i++)
		{
			mstack.push(i);
		}
		for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); ++i)
		{
			std::cout << *i << std::endl;
		}
		std::cout << "----------top---------" << std::endl;
		
		for (size_t i = 0; i < 50; i++)
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}
	{
	std::cout << "----------char---------" << std::endl;

		MutantStack<char> mstack;
		
			mstack.push('a');
			mstack.push('b');
		for (MutantStack<char>::iterator i = mstack.begin(); i != mstack.end(); ++i)
		{
			std::cout << *i << std::endl;
		}
		for (size_t i = 0; i < 2; i++)
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}
	{
		std::cout << "----------float---------" << std::endl;

		MutantStack<float> mstack;
		
			mstack.push(1.12322f);
			mstack.push(1.22322f);
		for (MutantStack<float>::iterator i = mstack.begin(); i != mstack.end(); ++i)
		{
			std::cout << *i << std::endl;
		}
		std::cout << "----------top---------" << std::endl;
		for (size_t i = 0; i < 2; i++)
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}
	{
		std::cout << "----------double---------" << std::endl;
		MutantStack<double> mstack;
		
			mstack.push(1.1232);
			mstack.push(1.222);
		for (MutantStack<double>::iterator i = mstack.begin(); i != mstack.end(); ++i)
		{
			std::cout << *i << std::endl;
		}
		std::cout << "----------top---------" << std::endl;
		for (size_t i = 0; i < 2; i++)
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}
}
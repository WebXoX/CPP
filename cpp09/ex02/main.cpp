#include <vector>
#include "PmergeMe.hpp"
// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	MutantStack<int> s(mstack);
// 	MutantStack<int>::iterator its = s.begin();
// 	MutantStack<int>::iterator ites = s.end();
// 	++it;
// 	--it;
// 	while (its != ites)
// 	{
// 	std::cout << *its << std::endl;
// 	++its;
// 	}
// 	return 0;
// }

int push (std::string str,PmergeMe *obj)
{
	if(str.find_first_not_of(" 0123456789-") != std::string::npos)
				throw ("Error");
	int *a = NULL,*b = NULL;
	int flag = 0;
	int aa, bb;
	for (size_t i = 0; i < str.length(); )
	{
		if(str[i] == ' ' && flag == 0)
			i++;
		else if (isdigit(str[i]) &&  flag == 0 )
		{
			size_t j = i+1;
			while (j < str.length() && isdigit(str[j]))
				j++;
			if(str[j] != ' ' && j != str.length())
				throw (" Error");
			if (a == NULL)
			{

				aa = static_cast<int>(strtol(str.substr(i,j).c_str(),NULL,10));
				a = &aa;
			}
			else
			{
				bb = static_cast<int>(strtol(str.substr(i,j).c_str(),NULL,10));
				b = &bb;
				flag = 1;
			}
			// std::cout << "number " << aa << " :" << bb << std::endl;
			i += j-i;
			if(i == str.length() && flag == 1)
				i--;
		}
		else if(a!= NULL && b != NULL && flag == 1)
		{
			std::cout << "number " << *a << " :" << *b << std::endl;
			obj->push_pair_ve(a,b,1);
			a = NULL;
			b = NULL;
			flag = 0;
			i++;	
		}
		else
			throw ("Error");
	}

	if (a != NULL && b == NULL)
	{
		obj->push_pair_ve(a,NULL,0);
	}
	return 1;
}

int main(int argc, char *argv[])
{
	if( argc == 2)
	{
		PmergeMe *obj = new PmergeMe();
		push(argv[1],obj);
		obj->a_sort_insert_ve();
		for (size_t i = 0; i < obj->itemsv.size(); ++i) {
        for (size_t j = 0; j < obj->itemsv[i].size(); ++j) {
            std::cout << obj->itemsv[i][j] << " ";
        }
        std::cout << std::endl; // Move to the next row
        std::cout << std::endl; // Move to the next row
    }
		
		delete obj;
	}
	else
	{
		std::cout << "Error: invalid number of inputs!!" << std::endl;
	}	
	return 0;
}
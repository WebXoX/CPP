#include <vector>
#include <list>
#include "PmergeMe.hpp"
#include <ctime>
#include <climits>
#include <sys/time.h>
int push (std::string str,PmergeMe *obj)
{
	if(str.find_first_not_of(" 0123456789") != std::string::npos)
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
				throw ("Error");
			if (a == NULL)
			{
				if(strtol(str.substr(i,j).c_str(),NULL,10) > INT_MAX)
					throw ("Error");
				aa = static_cast<int>(strtol(str.substr(i,j).c_str(),NULL,10));
				obj->before.push_back(aa);
				a = &aa;
			}
			else
			{
				if(strtol(str.substr(i,j).c_str(),NULL,10) > INT_MAX)
					throw ("Error");
				bb = static_cast<int>(strtol(str.substr(i,j).c_str(),NULL,10));
				obj->before.push_back(bb);
				b = &bb;
				flag = 1;
			}
			i += j - i;
			if(i == str.length() && flag == 1)
				i--;
		}
		else if(a!= NULL && b != NULL && flag == 1)
		{
			obj->push_pair_ve(a,b,1);
			obj->push_pair_l(a,b,1);
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
		obj->push_pair_l(a,NULL,0);
	}
	return 1;
}
int valid(std::vector<int> b)
{
	for (std::vector<int>::iterator i = b.begin(); i != b.end(); ++i)
	{
		for (std::vector<int>::iterator j = i + 1; j != b.end(); ++j)
		{
			if(*i>*j)
				return 1;
		}
	}
	return 0;
}
std::string strmerge(char ** argv)
{
	std::string str;
	str = argv[1];
	for (size_t i = 2; argv[i] != NULL; i++)
	{
		str = str + " " + argv[i];
	}
		// std::cout << str << std::endl;
	return str;
}
void printMerge( PmergeMe * obj, size_t i, size_t flag)
{
	size_t j = 1;
	std::vector<int> ::iterator it;
	std::vector<int> ::iterator end;
	if( flag == 1)
	{
		std::cout << "Before:	";
		it = obj->before.begin();
		end = obj->before.end();
	}
	else
	{
		std::cout << "After:	";
		it = obj->chainv.begin();
		end = obj->chainv.end();
	}
	for (; it !=  end; ++it)
	{
		if (j < i + 1)
		{
				std::cout << " " << *it ;
		}
		if((j == i && obj->before.size() > i))
		{
			std::cout<< " [...]" << std::endl;
			return ;
		}
		if(it == end)
			break;
		j++;
	}
	std::cout << std::endl;
}
int main(int argc, char *argv[])
{
	if( argc > 1)
	{
		std::string str = argv[1];
		PmergeMe *obj = new PmergeMe();
		if(argc > 2)
			str = strmerge(argv);
		try
		{

			push(str,obj);
			if(valid(obj->before) == 0)
				throw("Elements are already sorted");
			printMerge(obj,10,1);
			clock_t startTime = clock();
 			clock_t endTime;
			obj->a_sort_insert_ve();
			endTime = clock();
			
			std::cout << "Time to process a range of " << obj->before.size()<< " elements with std::vector : " << (double)(endTime - startTime) * (1000.0/CLOCKS_PER_SEC ) << " us\n"; 
			obj->a_sort_insert_l();
			endTime = clock();
			std::cout << "Time to process a range of " << obj->before.size()<< " elements with std::list : " <<  (double)(endTime - startTime) * ((1000.0/CLOCKS_PER_SEC )) << " us\n" ;
			printMerge(obj,10,0);

		}
		catch(char const* e)
		{
			std::cerr << e << '\n';
		}
		// std::cout << valid(obj) << std::endl;
		delete obj;
	}
	else
	{
		std::cout << "Error: invalid number of inputs!!" << std::endl;
	}	
	return 0;
}
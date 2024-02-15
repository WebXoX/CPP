#include "PmergeMe.hpp"

/*orth form*/
	PmergeMe::PmergeMe ()
	{
		// std::cout << "PmergeMe default constructor" << std::endl;
	}
	PmergeMe::PmergeMe (const PmergeMe &a)
	{
		// std::cout << "PmergeMe copy constructor " << std::endl;
		for (std::vector<int>::const_iterator i = a.before.begin(); i != a.before.end(); ++i)
			this->before.push_back(*i);
		for (std::vector<std::vector<int> >::const_iterator i = a.itemsv.begin(); i != a.itemsv.end(); ++i)
			this->itemsv.push_back(*i);
		for (std::list<std::list<int> >::const_iterator i = a.items.begin(); i != a.items.end(); ++i)
			this->items.push_back(*i);
		for (std::vector<int>::const_iterator i = a.chainv.begin(); i != a.chainv.end(); ++i)
			this->chainv.push_back(*i);
		for (std::list<int>::const_iterator i = a.chainl.begin(); i != a.chainl.end(); ++i)
			this->chainl.push_back(*i);
	}

	PmergeMe::~PmergeMe ()
	{
		// std::cout << "PmergeMe distructor called" << std::endl;
		if (this->itemsv.empty() == true)
			this->itemsv.clear();
	}

	PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
	{
		if (this != &rhs)
		{
			for (std::vector<int>::const_iterator i = rhs.before.begin(); i != rhs.before.end(); ++i)
			this->before.push_back(*i);
			for (std::vector<std::vector<int> >::const_iterator i = rhs.itemsv.begin(); i != rhs.itemsv.end(); ++i)
				this->itemsv.push_back(*i);
			for (std::list<std::list<int> >::const_iterator i = rhs.items.begin(); i != rhs.items.end(); ++i)
				this->items.push_back(*i);
			for (std::vector<int>::const_iterator i = rhs.chainv.begin(); i != rhs.chainv.end(); ++i)
				this->chainv.push_back(*i);
			for (std::list<int>::const_iterator i = rhs.chainl.begin(); i != rhs.chainl.end(); ++i)
				this->chainl.push_back(*i);
		}
		return *this;
	}
		
	/*orth PmergeMe*/
	/*exception*/
	/*exception*/
	/*getters and setters*/
	/*getters and setters*/
	/*extra*/
	void PmergeMe::push_pair_l(int *a ,int *b, int flag)
	{
		std::list<int> row;
		if (flag == 1)
		{
			if (*a > *b)
			{
				row.push_back(*a);
				row.push_back(*b);
			}
			else
			{
				row.push_back(*b);
				row.push_back(*a);
			}
		}
		else if (flag == 0)
			row.push_back(*a);
		this->items.push_back(row);
	}

void PmergeMe::a_sort_insert_l()
{
	for (std::list<std::list<int> >::iterator i = this->items.begin(); i != this->items.end(); ++i)
	{
		std::list<int>& innerList = *i;
		std::list<int>::iterator it = i->begin();
		if (innerList.size() == 2)
		{
			std::list<std::list<int> >::iterator j = i;
			++j;
			for (; j != this->items.end(); ++j)
			{
				std::list<int>& innerListJ = *j;
				std::list<int>::iterator jt = j->begin();
				if (innerListJ.size() == 2)
				{
					if ((*it) > (*jt))
					{
						int temp = (*it);
						int temp1 = *(++it);
						*--it = *jt;
						*++it = *(++jt);
						*(--jt) = temp;
						*(++jt) = temp1;
					}
				}
			}
		}
	}
	for (std::list<std::list<int> >::iterator i = this->items.begin(); i != this->items.end(); ++i)
	{
		std::list<int>& innerList = *i;
		std::list<int>::iterator it = i->begin();
		if (innerList.size() == 2)
		{
			this->chainl.push_back(*it);
			innerList.pop_front();	
		}
	}
	for (std::list<std::list<int> >::iterator i = this->items.begin(); i != this->items.end(); ++i)
	{
		std::list<int>& innerList = *i;
		std::list<int>::iterator it = innerList.begin();
		for (std::list<int>::iterator j = this->chainl.begin(); j != this->chainl.end(); ++j)
		{
			if (it != innerList.end() && *it <= *j)
			{
				this->chainl.insert(j, *it);
				it = innerList.erase(it);
				break;
			}
		}
	}
}
void PmergeMe::a_sort_insert_ve()
{
	for (size_t i = 0; i < this->itemsv.size(); i++)
	{
		if ( this->itemsv[i].size() == 2)
		{
			for (size_t j = i + 1; j < this->itemsv.size(); j++)
			{
				if ( this->itemsv[j].size() == 2)
				{
					if ( this->itemsv[i][1] > this->itemsv[j][1])
					{
						int temp = this->itemsv[i][0];
						int temp1 = this->itemsv[i][1];
						this->itemsv[i][0] = this->itemsv[j][0];
						this->itemsv[i][1] = this->itemsv[j][1];
						this->itemsv[j][0] = temp;
						this->itemsv[j][1] = temp1;
					}
				}
			}
		}
	}
	for (size_t i = 0; i < this->itemsv.size(); i++)
	{
		if ( this->itemsv[i].size() == 2)
		{
			this->chainv.push_back(this->itemsv[i][1]);
			this->itemsv[i].pop_back();	
		}
	}
	for (std::vector<std::vector<int> >::iterator outer_it = this->itemsv.begin(); outer_it != this->itemsv.end(); ++outer_it) 
	{
		std::vector<int>& inner_vector = *outer_it; // Get the inner vector
		for (std::vector<int>::iterator inner_it = inner_vector.begin(); inner_it != inner_vector.end(); ++inner_it)
		{
			for (std::vector<int>::iterator j =  this->chainv.begin(); j < this->chainv.end(); ++j)
			{
				if ( *inner_it < *j)
				{
					this->chainv.insert(j,*inner_it);
					break;
				}
			}
		}
	}
	this->itemsv.clear();
}
void PmergeMe::push_pair_ve(int *a ,int *b, int flag)
{
	std::vector<int> row;
	if (flag == 1)
	{
		if (*a > *b)
		{
			row.push_back(*b);
			row.push_back(*a);
		}
		else
		{
			row.push_back(*a);
			row.push_back(*b);
		}
	}
	else if (flag == 0)
		row.push_back(*a);
	this->itemsv.push_back(row);
}
	/*extra*/
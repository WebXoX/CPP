#include "PmergeMe.hpp"

/*orth form*/
    	PmergeMe::PmergeMe ()
		{
			std::cout << "PmergeMe default constructor" << std::endl;
		}
		PmergeMe::PmergeMe (const PmergeMe &a)
		{
			std::cout << "PmergeMe copy constructor " << std::endl;
			this->itemsv = a.itemsv;
			// for (std::vector<int>::const_iterator i = a.itemsv.begin(); i != a.itemsv.end(); ++i)
			// 	this->itemsv.push_back(*i);
		}

		PmergeMe::~PmergeMe ()
		{
			std::cout << "PmergeMe distructor called" << std::endl;
			if (this->itemsv.empty() == true)
				this->itemsv.clear();
		}

		PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
		{
			if (this != &rhs)
			{
				// this->itemsv = rhs.itemsv.copy();
			// for (std::vector<int>::const_iterator i = rhs.itemsv.begin(); i != rhs.itemsv.end(); ++i)
			// 	this->itemsv.push_back(*i);
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
		// std::cout << "a:: " << *a << "b::: " << *b << std::endl;
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
								this->itemsv[j][0] = temp;
								this->itemsv[j][1] = temp1;
								break;
							}
						}
					}
				}
			}

			// for (size_t i = 0; i < this->itemsv.size(); i++)
			// {
			// 	if ( this->itemsv[i].size() == 2)
			// 	{
			// 		this->chainv.push_back(this->itemsv[i][1]);
			// 	 	this->itemsv[i].pop_back();	
			// 	}
			// }
			
			// for (size_t i = 0; i < this->itemsv.size(); ++i) {
			// 	for (size_t j = 0; j < this->itemsv[i].size(); ++j) {
			// 		std::cout << this->itemsv[i][j] << " ";
			// 	}
			// 	std::cout << std::endl; 
			// }
			// 	std::cout << std::endl; 

			// for (size_t i = 0; i < this->chainv.size(); ++i) {
			// 		std::cout << this->chainv[i] << " ";
			// 	std::cout << std::endl; 
			// }
			// for (size_t i = 0; i < this->itemsv.size(); i++)
			// {
			// 	for (size_t j = 0; j < this->chainv.size(); j++)
			// 	{
			// 		if ( this->itemsv[i][0] < chainv[j])
			// 		{
			// 			this->chainv.insert(j,this->itemsv[i][0]);
			// 			this->itemsv[i].pop_back();	
			// 		}
			// 	}
			// }
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
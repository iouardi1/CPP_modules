/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:30:07 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/26 19:14:17 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	
}

PmergeMe::~PmergeMe() 
{
	
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	*this = copy;
}

PmergeMe    &PmergeMe::operator=(const PmergeMe& copy)
{
	vec1 = copy.vec1;
	list1 = copy.list1;
	return *this;
}


void PmergeMe::parse_fill_vec(int ac, char **av)
{
	int		i = 1;

	try
	{
		while(i < ac)
		{
			int		j = 0;
			while (j < strlen(av[i]))
			{
				if (!isdigit(av[i][j]))
				{
					std::cout << "Error" << std::endl;
					exit (EXIT_FAILURE);
				}
				j++;
			}
			vec1.push_back(std::atoi(av[i]));
			i++;
		}
	}
	catch (const std::exception & e)
	{
		std::cout << "Error" << std::endl;
		exit (EXIT_FAILURE);
	}
	std::cout << "Before: " ;
	for (std::vector<int>::iterator i = vec1.begin(); i != vec1.end(); i++)
		std::cout << *i << " " ;
	std::cout << std::endl;
}

void	PmergeMe::insertion_sort_vec(int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int j = i;
		while (j > start && vec1[j] < vec1[j - 1])
		{
			std::swap(vec1[j], vec1[j - 1]);
			j--;
		}
	}
}

void	PmergeMe::merge_insert_sorted_vec(int start, int end)
{
	if (end - start <= 16)
		insertion_sort_vec(start, end);
	else
	{
		int mid = (start + end) / 2;
		merge_insert_sorted_vec(start, mid);
		merge_insert_sorted_vec(mid + 1, end);

		std::vector<int> temp(end - start + 1);
		int i = start;
		int j = mid + 1;
		int k = 0;

		while (i <= mid && j <= end)
		{
			if (vec1[i] < vec1[j])
				temp[k++] = vec1[i++];
			else
				temp[k++] = vec1[j++];
		}

		while (i <= mid)
			temp[k++] = vec1[i++];

		while (j <= end)
			temp[k++] = vec1[j++];

		for (i = 0; i < k; i++)
			vec1[start + i] = temp[i];
	}
}

std::vector<int>	PmergeMe::get_vec1()
{
	return this->vec1;
}

void	PmergeMe::parse_fill_list(int ac, char **av)
{
	int		i = 1;

	try
	{
		while(i < ac)
		{
			int		j = 0;
			while (j < strlen(av[i]))
			{
				if (!isdigit(av[i][j]))
				{
					std::cout << "Error" << std::endl;
					exit (EXIT_FAILURE);
				}
				j++;
			}
			list1.push_back(std::atoi(av[i]));
			i++;
		}
	}
	catch (const std::exception & e)
	{
		std::cout << "Error" << std::endl;
		exit (EXIT_FAILURE);
	}
}

void	PmergeMe::merge(std::list<int>& left, std::list<int>& right, std::list<int>& result)
{
    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            result.push_back(left.front());
            left.pop_front();
        }
        else
		{
            result.push_back(right.front());
            right.pop_front();
        }
    }
    while (!left.empty())
	{
        result.push_back(left.front());
        left.pop_front();
    }
    while (!right.empty())
	{
        result.push_back(right.front());
        right.pop_front();
    }
}

void	PmergeMe::merge_insert_sorted_list(std::list<int> &lst)
{
	if (lst.size() > 1) 
	{
        std::list<int> left, right, result;
        int mid = lst.size() / 2;
        std::list<int>::iterator it = lst.begin();
        for (int i = 0; i < mid; ++i)
		{
            left.push_back(*it);
            ++it;
        }
        for (int i = mid; i < lst.size(); ++i)
		{
            right.push_back(*it);
            ++it;
        }
        merge_insert_sorted_list(left);
        merge_insert_sorted_list(right);
        merge(left, right, result);
        lst = result;
    }
}

std::list<int>&	PmergeMe::get_list1()
{
	return this->list1;
}
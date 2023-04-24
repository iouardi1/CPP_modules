/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:30:07 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/16 22:13:11 by iouardi          ###   ########.fr       */
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
			vec1.push_back(std::stoi(av[i]));
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
			list1.push_back(std::stoi(av[i]));
			i++;
		}
	}
	catch (const std::exception & e)
	{
		std::cout << "Error" << std::endl;
		exit (EXIT_FAILURE);
	}
}

void	PmergeMe::insertion_sort_list(std::list<int>::iterator start, std::list<int>::iterator end)
{
	for (std::list<int>::iterator i = start; i != end; ++i)
	{
        std::list<int>::iterator j = i;
        while (j != start && *j < *(j--))
		{
            std::iter_swap(j, j--);
        }
    }
}

void	PmergeMe::merge_insert_sorted_list(std::list<int>::iterator start, std::list<int>::iterator end)
{
	if (std::distance(start, end) <= 16)
		insertion_sort_list(start, end);
	else
	{
		std::list<int>::iterator mid = start;
		std::advance(mid, std::distance(start, end) / 2);

		merge_insert_sorted_list(start, mid);
		merge_insert_sorted_list(mid, end);

		std::list<int> temp;
		std::list<int>::iterator i = start, j = mid;

		while (i != mid && j != end)
		{
			if (*i < *j)
				temp.push_back(*i++);
			else
				temp.push_back(*j++);
		}

		while (i != mid)
			temp.push_back(*i++);

		while (j != end)
			temp.push_back(*j++);

		std::copy(temp.begin(), temp.end(), start);
	}
}

std::list<int>&	PmergeMe::get_list1()
{
	return this->list1;
}
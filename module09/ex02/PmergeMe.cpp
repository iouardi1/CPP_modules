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
	vec2 = copy.vec2;
	left= copy.left;
	right = copy.right;
	return *this;
}


void PmergeMe::parse_fill_container(int ac, char **av)
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
			if (find(vec1.begin(), vec1.end(), std::stoi(av[i])) == vec1.end())
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

void	PmergeMe::insertion_sort(int start, int end)
{
    for (int i = start + 1; i < end; i++)
	{
        int key = vec1[i];
        int j = i - 1;
        while (j >= start && vec1[j] > key)
		{
            vec1[j + 1] = vec1[j];
            j--;
        }
        vec1[j + 1] = key;
    }
}

void	PmergeMe::merge_lists(int start)
{
	int i = start;
	while (!left.empty() && !right.empty())
	{
		if (left.front() < right.front())
		{
			vec2[i] = left.front();
			left.pop_front();
		}
		else
		{
			vec2[i] = right.front();
			right.pop_front();
		}
		i++;
	}
	while (!left.empty())
	{
		vec2[i] = left.front();
		left.pop_front();
		i++;
	}
	while (!right.empty())
	{
		vec2[i] = right.front();
		right.pop_front();
		i++;
	}
}

void	PmergeMe::merge_insert_sorted(int start, int end)
{
	int size = end - start;

    if (size < 10)
        insertion_sort(start, end);
	else
	{
        int mid = start + size / 2;
        merge_insert_sorted(start, mid);
        merge_insert_sorted(mid, end);

        for (int i = start; i < mid; i++)
            left.push_back(vec1[i]);

        for (int i = mid; i < end; i++)
            right.push_back(vec1[i]);
		this->vec2.resize(vec1.size());
        merge_lists(start);
        for (int i = start; i < end; i++)
            vec1[i] = vec2[i];
    }
}

std::vector<int>	PmergeMe::get_vec1()
{
	return this->vec1;
}
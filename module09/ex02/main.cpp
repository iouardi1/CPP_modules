/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:41:30 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/25 15:29:45 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac >= 2 && ac <= 3001)
	{
		PmergeMe    mimi;
		
		mimi.parse_fill_vec(ac, av);
		mimi.parse_fill_list(ac, av);
		int size = mimi.get_vec1().size();
		clock_t start_time_vec = clock();
		mimi.merge_insert_sorted_vec(0, size - 1);
		clock_t end_time_vec = clock();
		clock_t start_time_list = clock();
		mimi.merge_insert_sorted_list(mimi.get_list1());
		clock_t end_time_list = clock();
		float duration_vec = float(end_time_vec - start_time_vec);
		float duration_list = float(end_time_list - start_time_list);
		std::cout << "After: ";
		for (int i = 0 ; i < size ; i++)
		    std::cout << mimi.get_vec1()[i] << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " <<  ac - 1 << " elements with std::[vector] : " <<  (float)duration_vec << " us" << std::endl;
		std::cout << "Time to process a range of " <<  ac - 1 << " elements  with std::[list] : " <<  (float)duration_list << " us" << std::endl;
	}
	else
	{
		std::cout << "Please enter a valid argument1." << std::endl;
		return 1;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:30:03 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/16 22:09:31 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

class   PmergeMe
{
	private:
		std::vector<int>	vec1;
		std::list<int>		list1;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe&	copy);


		void				parse_fill_vec(int ac, char **av);
		void				merge_insert_sorted_vec(int start, int end);
		void				insertion_sort_vec(int start, int end);
		void				parse_fill_list(int ac, char **av);
		void				merge_insert_sorted_list(std::list<int>::iterator start, std::list<int>::iterator end);
		void				insertion_sort_list(std::list<int>::iterator start, std::list<int>::iterator end);
		std::vector<int>	get_vec1();
		std::list<int>&		get_list1();
		
};


#endif

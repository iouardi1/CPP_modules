/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:30:03 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/15 10:41:57 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <list>
#include <string>

class   PmergeMe
{
	private:
		std::vector<int>	vec1;
		std::vector<int>	vec2;
		std::list<int>		left;
		std::list<int>		right;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe&	copy);


		void				parse_fill_container(int ac, char **av);
		void				merge_insert_sorted(int start, int end);
		void				insertion_sort(int start, int end);
		void				merge_lists();
		std::vector<int>	get_vec1();
		
};


#endif
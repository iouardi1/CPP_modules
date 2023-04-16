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
		void				merge_lists(int start);
		std::vector<int>	get_vec1();
		
};


#endif

// 4679 15870 19274 23548 33528 35831 57809 60258 63015 69786 74198 81053 87564 92457 3142 11706 13659 21684 33756 56937 64510 82483 4679 15870 19274 23548 33528 35831 57809 60258 63015
// 23548 87564 4679 98347 60258 35831 74198 92457 15870 33528 19274 57809 63015 81053 69786 21969 95987 57508 65519 92046 39306 9913 48347 13659 21684 11706 64510 82483 3142 33756 56937 4545 5785 55422 55758785 42425 5555275 2424 545275 2125 5742 542121 577554
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:41:30 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/16 21:50:16 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac >= 2 && ac <= 3001)
    {
        PmergeMe    mimi;

        mimi.parse_fill_container(ac, av);
        int size = mimi.get_vec1().size();
        mimi.merge_insert_sorted(0, size);
        std::cout << "After: ";
        for (int i = 0 ; i < size ; i++)
            std::cout << mimi.get_vec1()[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Please enter a valid argument1." << std::endl;
        return 1;
    }
}
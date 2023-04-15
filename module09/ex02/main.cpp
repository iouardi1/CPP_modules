/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 05:41:30 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/15 10:55:49 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac > 3000 || ac  < 1)
    {
        std::cout << "Please enter at least two integers to be sorted." << std::endl;
        return 1;
    }
    PmergeMe    mimi;

    mimi.parse_fill_container(ac, av);
    int size = mimi.get_vec1().size();
    mimi.merge_insert_sorted(0, size);
    size = mimi.get_vec1().size();
    std::cout << "After: ";
    for (int i = 0 ; i < size ; i++)
        std::cout << mimi.get_vec1()[i] << " ";
    std::cout << std::endl;
}
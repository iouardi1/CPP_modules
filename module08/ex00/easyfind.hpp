/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:36:25 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/13 03:48:05 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template <typename  T>

void    easyfind(T *a, int &i)
{
    int j = 0;
    while (a[j])
        j++;
    for (int k = 0; k < j; k++)
        if (a[k] == i)
            return a[k];
}

#endif
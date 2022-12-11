/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:26:53 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/11 21:17:53 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *arr, int leng, void (*func)(const T &))
{
    for (int i = 0; i < leng; i++)
        func(arr[i]);
}

#endif
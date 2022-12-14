/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:26:53 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/14 14:36:20 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(const T *arr, size_t leng, void (*func)(const T &))
{
    for (size_t i = 0; i < leng; i++)
        func(arr[i]);
}

template <typename T>
void    iter(T *arr, size_t leng, void (*func)(T &))
{
    for (size_t i = 0; i < leng; i++)
        func(arr[i]);
}
#endif
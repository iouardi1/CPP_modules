/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:04:44 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/10 02:23:25 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template   <typename T>
void  swap(T &a, T &b)
{
    T   temp;

    temp = a;
    a = b;
    b = temp;
}

template   <typename T>
T   &min(T &a, T &b)
{
    return (a < b ? a : b);
}

template   <typename T>
T   &max(T &a, T &b)
{
    return (a > b ? a : b);
}

#endif
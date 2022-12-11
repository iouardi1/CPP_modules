/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:14:03 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/11 20:00:13 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
// #include "string"

void *modifyArray(const char & str)
{
    void *array = NULL;
    std::cout << "here we call our dear: "<< str << std::endl;
    return (array);
}

int main( void ) 
{
    const char *arr = (char *)malloc(sizeof(char) * 3);
    const int str = 1;
    int i =3;
    ::iter(arr, i, modifyArray(str));
    
    return 0;
}
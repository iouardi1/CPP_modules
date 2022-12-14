/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:14:03 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/14 14:38:47 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void modifyArray(T & str)
{
	str += 1;
	std::cout << "here we call our dear: "<< str << std::endl;
}

int main( void ) 
{
	char arr[4] = {'a', 'b', 'c', '4'};
	size_t i = 4;
	iter(arr, i, modifyArray);

	return 0;
}
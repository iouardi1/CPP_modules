/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:14:03 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/12 23:30:14 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void modifyArray(const T & str)
{
	std::cout << "here we call our dear: "<< str << std::endl;
}

int main( void ) 
{
	const char arr[4] = {'a', 'b', 'c', '4'};
	int i = 4;
	iter(arr, i, modifyArray);

	return 0;
}
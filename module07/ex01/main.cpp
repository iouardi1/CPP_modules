/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:14:03 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/11 21:18:51 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
// #include "string"

template <typename T>
void modifyArray(const T & str)
{
	(void)str;
	std::cout << "here we call our dear: "<< str << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

int main( void ) 
{
	const char arr[3] = {'a', 'b', 'c'};
	int i =3;
	iter(arr, i, modifyArray);

	
	return 0;
}
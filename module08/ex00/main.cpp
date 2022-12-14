/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:07:51 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/14 19:32:54 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

template <typename T>
void	printelement(const T& container, int element)
{
	typename T::const_iterator itr = easyfind(container, element);
	std::cout << "the element required is: " << *itr << std::endl;
}

int main()
{
	try
	{
		std::vector<int> viiictor;

		for (int i = 0; i < 10; i++)
			viiictor.push_back(i);
		printelement(viiictor, 5);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
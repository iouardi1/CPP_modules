/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 03:05:13 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/25 17:58:50 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter one argument!" << std::endl;
		return -1;
	}
	RPN		str;
	
	str.parse_and_calculate(av[1]);
}

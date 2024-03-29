/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:57:11 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/09 18:41:19 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Please enter one argument" << std::endl;
		return 1;
	}
	try {
		Conversion convert;
		std::string str = av[1];
		convert.setStr(str);
		convert.toChar();
		convert.toInt();
		convert.toFloat();
		convert.toDouble();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
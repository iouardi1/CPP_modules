/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:57:11 by iouardi           #+#    #+#             */
/*   Updated: 2022/12/05 20:06:17 by iouardi          ###   ########.fr       */
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
	try{
		
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
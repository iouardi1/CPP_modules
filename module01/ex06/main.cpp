/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:16:04 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/14 13:31:41 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{		
	if (ac != 2)
	{
		std::cout << "please enter one argument\n";
		return 1;	
	}
	std::string		str(av[1]);
	Harl			harl;
	
	harl.complain(str);
	return (0);
}

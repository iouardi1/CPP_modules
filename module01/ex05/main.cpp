/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:36:51 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/09 22:12:56 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	std::string str;
	Harl        harl;
	
	std::cout << "enter your comment Harl\n";
	std::cin >> str;
	harl.complain(str);
}

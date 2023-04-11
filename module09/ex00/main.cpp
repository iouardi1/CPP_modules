/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:42:25 by iouardi           #+#    #+#             */
/*   Updated: 2023/04/11 09:31:15 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		btc	bitcoina("data.csv");
		bitcoina.parseFile(argv[1]);
	}
	else
		std::cout << "Please enter one argument" << std::endl;
	return 0;
}
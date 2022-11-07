/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:36:02 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/04 15:49:15 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook		phoneBook;
	std::string		input;

	do {
		std::cout << "Please enter your command : " << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (0);
		else if (input ==  "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input != "EXIT")
			std::cout << "wrong command :(" << std::endl;
		}	while (input != "EXIT" || input == "");
	return (0);
}

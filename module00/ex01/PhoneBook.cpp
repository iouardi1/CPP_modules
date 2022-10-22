/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:01:45 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/23 00:05:06 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::~PhoneBook(){}

Contact	PhoneBook::getContact(int i)
{
	return (contacts[i]);
}

void    PhoneBook::addContact()
{
	std::string str;
	int			i = 0;
	
	std::cout << "Please enter the first name" << std::endl;
	do {
		std::getline(std::cin, str);
	} while (str ==  "\n");
	contacts[i].setFirstName(str);
	std::cout << "Please enter the last name" << std::endl;
		std::getline(std::cin, str);
	contacts[i].setLastName(str);
	std::cout << "Please enter the nickname" << std::endl;
	std::getline(std::cin, str);
	contacts[i].setNickName(str);
	std::cout << "Please enter the phone number" << std::endl;
	std::getline(std::cin, str);
	contacts[i].setPhoneNumber(str);
	std::cout << "Please enter the darkest secret" << std::endl;
	std::getline(std::cin, str);
	contacts[i].setDarkestSecret(str);
	i++;
}
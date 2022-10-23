/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:01:45 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/23 12:49:15 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::~PhoneBook(){}

Contact	PhoneBook::getContact(int i)
{
	return (contacts[i]);
}

PhoneBook::PhoneBook()
{
	i = 0;
}

void    PhoneBook::addContact()
{
	std::string str;

	if (i == 8)
		i = 0;
	do {	
		std::cout << "Please enter the first name" << std::endl;
		std::getline(std::cin, str);
	} while (str.empty() || str == "");
	contacts[i].setFirstName(str);
	do {
		std::cout << "Please enter the last name" << std::endl;
		std::getline(std::cin, str);
	} while(str.empty() || str == "");
	contacts[i].setLastName(str);
	do {
		std::cout << "Please enter the nickname" << std::endl;
		std::getline(std::cin, str);
	} while(str.empty() || str == "");
	contacts[i].setNickName(str);
	do {
		std::cout << "Please enter the phone number" << std::endl;
		std::getline(std::cin, str);
	} while(str.empty() || str == "");
	contacts[i].setPhoneNumber(str);
	do {
		std::cout << "Please enter the darkest secret" << std::endl;
		std::getline(std::cin, str);
	} while(str.empty() || str == "");
	contacts[i].setDarkestSecret(str);
	i++;
}

void	PhoneBook::searchContact()
{
	int		i = 0;
	std::cout << "index     /first name/last name /nickname  " << std::endl;
	std::cout << std::setw(10);
	std::cout << i << "/" << std::setw(10) << getContact(i).getFirstName() << "/" << std::endl;
}
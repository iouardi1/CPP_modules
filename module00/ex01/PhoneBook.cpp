/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:01:45 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/28 11:26:44 by iouardi          ###   ########.fr       */
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

int	checkStrIsdigit(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

void    PhoneBook::addContact()
{
	std::string str;

	if (i == 8)
		i = 0;
	do {	
		std::cout << "Please enter the first name" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
	} while (str.empty() || str == "");
	contacts[i].setFirstName(str);
	do {
		std::cout << "Please enter the last name" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
	} while(str.empty() || str == "");
	contacts[i].setLastName(str);
	do {
		std::cout << "Please enter the nickname" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
	} while(str.empty() || str == "");
	contacts[i].setNickName(str);
	do {
		std::cout << "Please enter the phone number" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
	} while(str.empty() || str == "" || !checkStrIsdigit(str));
	contacts[i].setPhoneNumber(str);
	do {
		std::cout << "Please enter the darkest secret" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
	} while(str.empty() || str == "");
	contacts[i].setDarkestSecret(str);
	i++;
}

void	PhoneBook::searchContact()
{
	int			i = 0;
	int			j;
	std::string	index;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < 8 && !getContact(i).getFirstName().empty())
	{	
		std::cout << std::setw(10) << i << "|";
		if (getContact(i).getFirstName().length() >= 10)
			std::cout << getContact(i).getFirstName().substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << getContact(i).getFirstName();
		std::cout << "|";
		if (getContact(i).getLastName().length() >= 10)
			std::cout << getContact(i).getLastName().substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << getContact(i).getLastName();
		std::cout << "|";
		if (getContact(i).getNickName().length() >= 10)
			std::cout << getContact(i).getNickName().substr(0, 9) + "." << std::endl;
		else
			std::cout << std::setw(10) << getContact(i).getNickName() << std::endl;
		i++;
	}
	if (i == 0)
		return ;
	do
	{
		std::cout << "Please enter the index you want" << std::endl;
		std::getline(std::cin, index);
		if (std::cin.eof())
			exit (0);
		if (index == "" || !checkStrIsdigit(index) || atol(index.c_str()) >= i)
			std::cout << "wrong index" << std::endl;
		else if (std::stoi(index) < 0 || std::stoi(index) > 7)
			std::cout << "wrong index" << std::endl;
	}	while (index == "" || !checkStrIsdigit(index) || atol(index.c_str()) >= i);
	j = atol(index.c_str());
	std::cout << "First name     : " << getContact(j).getFirstName() << std::endl;
	std::cout << "Last name      : " << getContact(j).getLastName() << std::endl;
	std::cout << "Nickname       : " << getContact(j).getNickName() << std::endl;
	std::cout << "Phone number   : " << getContact(j).getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << getContact(j).getDarkestSecret() << std::endl;
}

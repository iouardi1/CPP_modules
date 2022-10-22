/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:42:26 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/22 22:44:28 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(std::string fN)
{
	firstName = fN;
}

void    Contact::setLastName(std::string lN)
{
	lastName = lN;
}

void    Contact::setNickName(std::string nN)
{
	nickName = nN;
}

void    Contact::setPhoneNumber(std::string pN)
{
	phoneNumber = pN;
}

void    Contact::setDarkestSecret(std::string dS)
{
	darkestSecret = dS;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string	Contact::getNickName()
{
	return (nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}

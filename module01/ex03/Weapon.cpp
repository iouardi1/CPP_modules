/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:43:30 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/31 12:44:34 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string _type)
{
	// std::cout << "here i am " << std::endl;
	type = _type;	
}

Weapon::~Weapon(){}
Weapon::Weapon(){}

std::string& Weapon::getType()
{
	return (type);
}

void    Weapon::setType(std::string str)
{
	type = str;
}

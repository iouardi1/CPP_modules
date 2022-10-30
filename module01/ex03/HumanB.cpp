/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:14:09 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/30 20:31:26 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    weapon = nullptr;
    name = str;
    
}

HumanB::~HumanB()
{
    
}

void    HumanB::setWeapon(Weapon weaapon)
{
    weapon = &weaapon;
}

void    HumanB::setName(std::string _name)
{
    name = _name;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

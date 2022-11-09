/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:14:09 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/09 18:25:46 by iouardi          ###   ########.fr       */
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
    std::cout << "human " << name << " destroyed\n";
}

void    HumanB::setWeapon(Weapon &weaapon)
{
    weapon = &weaapon;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

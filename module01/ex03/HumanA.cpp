/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:54:26 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/30 20:56:23 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weaapon) : weapon(weaapon) , name(str)
{
	
}

HumanA::~HumanA()
{
	std::cout << "Human " << name << " ghayerha" << std::endl;
}

Weapon&  HumanA::getWeapon()
{
	return (weapon);
}

void    HumanA::setWeapon(Weapon &weaapon)
{
	weapon = weaapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}


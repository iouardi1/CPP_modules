/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:50:56 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/31 14:18:38 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "zombie " << name << " destroyed!" << std::endl;
}

Zombie::Zombie(){}

Zombie::Zombie(std::string str)
{
	name = str;
	announce();
}


void	Zombie::setZombieName(std::string str)
{
	name = str;
}

std::string	Zombie::getZombieName()
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

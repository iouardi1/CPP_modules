/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:50:56 by iouardi           #+#    #+#             */
/*   Updated: 2022/10/28 18:47:02 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(){}

Zombie::Zombie(){}


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

Zombie*		newZombie(std::string name)
{
	Zombie	*zombiie;

	zombiie->setZombieName(name);
	return (zombiie);
}

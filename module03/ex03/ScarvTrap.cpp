/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarvTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:14:47 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 22:17:16 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "default constructor of ScavTrap called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor of ScavTrap called\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "constructor of ScavTrap called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "copy constructor of ScavTrap called\n";
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "copy assignment operator of ScavTrap called\n";

	if ((this) != &copy)
	{
		ScavTrap((&copy)->getName());
		this->setPoints((&copy)->getHitPoints(), (&copy)->getEnergyPoints(), (&copy)->getAttackDamage());
		return (*this);
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() <<  " is now in Gate keeper mode\n";
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap: " << this->getName() << " attack" << target << ", causing " << this->getAttackDamage() << " points of damage!\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarvTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:14:47 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 17:14:01 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarvTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("DefalutSt")
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
		this->Name = copy.Name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
		return (*this);
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode\n";
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap: " << this->Name << " attack " << target << ", causing " << this->attackDamage << " points of damage!\n";
}

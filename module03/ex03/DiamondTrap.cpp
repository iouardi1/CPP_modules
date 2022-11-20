/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:14:06 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 20:39:49 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor of DiamondTrap is called\n";
	this->Name = "DefaultDt";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	std::cout << "Constructor of DiamondTrap is called\n";
	this->Name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor of DiamondTrap is called\n";
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->Name = copy.Name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return *this;
}

void	DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "my name is: " << Name << " , and my ClapTrap name is: " << ClapTrap::Name << std::endl;
}

std::string	DiamondTrap::getName()
{
	return(Name);
}
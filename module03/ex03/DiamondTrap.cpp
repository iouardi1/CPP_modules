/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:14:06 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 17:43:01 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(this->Name + "_clap_name")
{
	std::cout << "Default constructor of DiamondTrap is called\n";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	this->ScavTrap::attack();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default destructor of DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name + "_clap_name")
{
	std::cout << "Constructor of DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor of DiamondTrap is called\n";
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->Name = copy.Name;
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	return *this;
}

void	DiamondTrap::attack(const std::string & target)
{
	std::cout << "DiamondTrap " <<this->Name << " has attack " << target << " causing " << this->getAttackDamage() << " energy points\n";
}

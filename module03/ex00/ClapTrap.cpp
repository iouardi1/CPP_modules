/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:29:58 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 16:35:05 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default contructor called\n";
}

ClapTrap::ClapTrap(std::string name): Name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "copy constructor called\n";
	(*this) = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &copy)
{
	this->Name = copy.Name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0)
	{
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << Name << " Attacks " << target << ", causing " << attackDamage << " points of damage!" << "\n";
	}
	else
		std::cout << "ClapTrap " << Name << " is out of energy!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
		std::cout << "ClapTrap " << Name << " is already dead :(\n";
	else if (amount <= this->hitPoints)
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrapp " << Name << " got attacked, he got " << this->hitPoints << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << Name << " took too much damaged and died!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints -= 1;
		std::cout << "ClapTrapp " << Name << " repaired " << this->hitPoints << " energy points!\n";
	}
	else
		std::cout << "ClapTrap " << Name << " is already dead!\n";
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}

unsigned int ClapTrap::getAttackDamage()
{
	return (this->attackDamage);
}

std::string ClapTrap::getName() const
{
	return (Name);
}

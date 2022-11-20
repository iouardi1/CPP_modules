/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:29:58 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 19:12:40 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default contructor of ClapTrap called\n";
}

ClapTrap::ClapTrap(std::string name): Name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "constructor of ClapTrap called\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "copy constructor of ClapTrap called\n";
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignement operator of ClapTrap called\n";

	this->Name = copy.Name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << Name << " Attacks " << target << ", causing " << attackDamage << " points of damage!" << "\n";
	}
	else
		std::cout << "ClapTrap " << Name << " is out of energy!\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
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

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints -= 1;
		std::cout << "ClapTrapp " << Name << " repaired " << this->hitPoints << " energy points!\n";
	}
}

std::string	ClapTrap::getName() const
{
	return(Name);
}

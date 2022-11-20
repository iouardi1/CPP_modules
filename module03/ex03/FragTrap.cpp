/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:34:24 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/20 17:24:12 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("defaultFt")
{
	std::cout << "Default constructor of FragTrap is called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor of FragTrap is called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor of FragTrap is called\n";
	*this = copy;
}

FragTrap& 	FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy operator of FragTrap is called\n";
	if (this != &copy)
	{
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
		return (*this);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap is called\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << " is requesting a high five\n";
}

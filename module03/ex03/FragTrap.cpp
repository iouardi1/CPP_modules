/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:34:24 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/16 15:46:36 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor of FragTrap is called\n";
	setPoints(100, 100, 30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor of FragTrap is called\n";
	setPoints(100, 100, 30);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor of FragTrap is called\n";
	this->setName(copy.getName());
	this->setPoints(copy.getHitPoints(), copy.getEnergyPoints(), copy.getAttackDamage());
	*this = copy;
}

FragTrap& 	FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy operator of FragTrap is called\n";
	if (this != &copy)
	{
		FragTrap((&copy)->getName());
		this->setPoints(copy.getHitPoints(), copy.getEnergyPoints(), copy.getAttackDamage());
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
	std::cout << "FragTrap " << this->getName() << " requesting a high five\n";
}

void	FragTrap::setHitPoints(unsigned int hP)
{
	this->setHitPoints(hP);
}

void	FragTrap::setEnergyPoints(unsigned int eP)
{
	this->setEnergyPoints(eP);
}

void	FragTrap::setAttackDamage(unsigned int aD)
{
	this->setAttackDamage(aD);
}

unsigned int FragTrap::getEnergyPoints() const
{
	return (this->getEnergyPoints());
}

unsigned int FragTrap::getHitPoints() const
{
	return (this->getHitPoints());
}

unsigned int FragTrap::getAttackDamage() const
{
	return (this->getAttackDamage());
}

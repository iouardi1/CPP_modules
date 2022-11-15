/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:14:06 by iouardi           #+#    #+#             */
/*   Updated: 2022/11/15 23:52:46 by iouardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor of DiamondTrap is called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default destructor of DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->Name = Name;
	std::cout << "Constructor of DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor of DiamondTrap is called\n";
	*this = copy;
}

